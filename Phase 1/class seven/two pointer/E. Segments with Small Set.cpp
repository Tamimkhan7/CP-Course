#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

const int N = 1e5 + 9;
int a[N];

int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> freq;
    ll ans = 0;
    int l = 0, uni_cnt = 0;

    for (int r = 0; r < n; r++)
    {
        if (freq[a[r]] == 0)
            uni_cnt++;
        freq[a[r]]++;

        while (uni_cnt > k)
        {
            freq[a[l]]--;
            if (freq[a[l]] == 0)
                uni_cnt--;
            l++;
        }

        ans += (r - l + 1);
    }

    cout << ans << '\n';
    return 0;
}
