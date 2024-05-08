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
const int N = 5 * 1e3;

// bool ok()
// {
// }

int32_t main()
{
    MTK;
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(all(v));

    for (int i = 0; i < n; i++)
    {
        int sum = x - v[i].first;
        int l = i + 1, r = n - 1; // use two pointer
        while (l < r)
        {
            int res = v[l].first + v[r].first;
            if (res == sum)
            {
                cout << v[i].second << ' ' << v[l].second << ' ' << v[r].second << '\n';
                return 0;
            }
            else if (res > sum)
                r--;
            else
                l++;
        }
    }
    cout << "IMPOSSIBLE" << '\n';
    return 0;
}