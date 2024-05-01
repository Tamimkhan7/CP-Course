#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e5 + 9;
int a[N], n, k;
int32_t main()
{
    MTK;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    multiset<int> se;
    k--;
    for (int i = 0; i < n; i++)
    {
        se.insert(a[i]);
        if (i >= k)
        {
            set<int> s(se.begin(), se.end());
            cout << s.size() << ' ';
            se.erase(se.find(a[i - k])); // k th last digit deleted
        }
    }
    cout << '\n';
    return 0;
}
// time_complexity(n*k)