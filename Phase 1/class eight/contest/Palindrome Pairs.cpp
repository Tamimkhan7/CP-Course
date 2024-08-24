#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e5 + 9;
int mask[N];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        vector<int> freq(26, 0);
        for (auto c : s)
            freq[c - 'a']++;
        for (int k = 0; k < 26; k++)
        {
            if (freq[k] % 2 == 1)
            {
                mask[i] += 1 << k;
                // cout << mask[i] << ' ';
            }
        }
        // cout << '\n';
    }

    ll ans = 0;
    map<int, int> cnt;
    for (int i = 1; i <= n; i++)
    {
        // for (int j = i + 1; j <= n; j++)
        // {
        //     int merged_mask = mask[i] ^ mask[j];
        //     bool ok = false;
        //     if (merged_mask == 0)//all char occur even time
        //         ok = true;
        //     else
        //     {
        //         if (__builtin_popcount(merged_mask) == 1)//exactly one char occur odd time others char occur even time
        //             ok = true;
        //     }
        //     if (ok)
        //         ans++;
        // }
        ans += cnt[mask[i]]; // check for even occur, all char occur even time, check kor i<j ans mask[i]^mask[j]==0
        // exactly one char occur odd time others char occur even time
        // count j<i such that mask[i]^mask[j]=(1<<k) for some of 0<=k<26;
        // it means mask[i] = mask[j]^(1<<k)
        for (int k = 0; k < 26; k++)
            ans += cnt[mask[i] ^ (1 << k)];
        cnt[mask[i]]++;
    }
    cout << ans << '\n';
    return 0;
}