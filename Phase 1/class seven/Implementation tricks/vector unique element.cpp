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

int32_t main()
{
    MTK;
    vector<int> v = {1, 2, 1, 3, 4, 3, 1, 5, 7, 2};
    // aita akta way ber kora jonnno
    // set<int> s(all(v));
    // for (auto x : s)
    //     cout << x << ' ';
    // cout << '\n';
    sort(all(v));
    auto it = unique(all(v)); // ai vabe rakhle unique gula age cole asbe ar baki gula jemone icche temone thakbe oita dekhar bepar na
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';

    // vector theke unique element rakha jay
    v.erase(it, v.end());
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
    return 0;
}