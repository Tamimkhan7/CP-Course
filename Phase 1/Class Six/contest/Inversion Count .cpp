#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
const int N = 2e5 + 9;
int a[N];

ll solve(int l, int r)
{
    // base case
    if (l >= r)
        return 0;
    // divide part
    int mid = (l + r) / 2;
    ll ans = solve(l, mid);
    cout << ans << '\n';
    ans += solve(mid + 1, r);

    // right part, sorte right part value store to the vector
    vector<int> v;
    for (int i = mid + 1; i <= r; i++)
        v.push_back(a[i]);
    sort(all(v));
    // right part inversion count, how many inversion to here
    for (int i = l; i <= mid; i++)
        ans += lower_bound(all(v), a[i]) - v.begin();

    return ans;
}

int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll ans = solve(0, n - 1);
        cout << ans << '\n';
    }
    return 0;
}
