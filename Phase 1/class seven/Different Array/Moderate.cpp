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
vector<int> add[N], rem[N];
int32_t main()
{
    MTK;
    int n, q;
    cin >> n >> q;
    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        add[l].push_back(x);
        rem[r + 1].push_back(x);
    }
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        for (auto x : add[i]) // 3 ar modde ace 2 for first queries
            mp[x]++;

        for (auto x : rem[i])
        {
            mp[x]--;
            if (mp[x] == 0)
                mp.erase(x);
        }

        cout << mp.size() << '\n';
    }

    return 0;
}

// aita optimization but tle asbe karon aitar time complexity already ()
// vector<<int>pref;
// for (int i = 1; i <= n; i++)
// {
//     for (auto x : add[i]) // 3 ar modde ace 2 for first queries
//         pref.push_back(x);

//     for (auto x : rem[i])
//     {
//         // cout << "x " << x << '\n';
//         pref.erase(find(all(pref), x));
//     }
//     // for (auto x : pref)
//     //     cout << x << ' ';
//     // cout << '\n';
//     // amar full vector print kora lagtece na just lagtece amar akta continer koyta unique value ace
//     set<int> se(all(pref)); // set modde pura array ta niye nicci
//     if (!se.empty())
//         cout << se.size() << '\n';
// }