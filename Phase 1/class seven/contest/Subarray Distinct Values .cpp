#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

struct distinctcounter
{
    map<int, int> cnt;
    void add(int x)
    {
        cnt[x]++;
    }
    void remove(int x)
    {
        cnt[x]--;
        if (cnt[x] == 0)
            cnt.erase(x);
    }
    int distinct()
    {
        return cnt.size();
    }
} ds;

int main()
{
    MTK;
    int n, k;
    cin >> n >> k;
    int a[n + 2];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int l = 1;
    ll ans = 0;

    for (ll r = 1; r <= n; r++)
    {
        ds.add(a[r]);
        while (l <= r && ds.distinct() > k)
        {
            ds.remove(a[l]);
            l++;
        }
        ans += r - l + 1;
    }
    cout << ans << '\n';
    return 0;
}