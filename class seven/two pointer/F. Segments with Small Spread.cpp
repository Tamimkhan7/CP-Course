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
ll a[N];
int32_t main()
{
    MTK;
    int n;
    ll k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll ans = 0;
    int r = 1;
    multiset<ll> se;
    for (int l = 1; l <= n; l++)
    {
        while (r <= n)
        {
            se.insert(a[r]);
            if (*(se.rbegin()) - *(se.begin()) <= k)
            {
                // cout << *se.rbegin() << ' ' << *se.begin() << '\n';
                r++;
            }
            else
            {
                se.erase(se.find(a[r]));
                break;
            }
        }
        cout << r << '\n';
        ans += r - l;
        // ds.print();
        se.erase(se.find(a[l]));
    }
    cout << ans << '\n';
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define MTK                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define mem(a, b) memset(a, b, sizeof(a))
// #define all(x) (x).begin(), (x).end()
// #define ll int long long
// #define mod 1000000007
// const int N = 1e5 + 9;
// ll a[N];
// // DS use kora hoice just empty set check korar jonno
// struct DS
// {
//     multiset<ll> se; // karon ak value onek bar aste pare// ar ami value insert korbo deleted korbo min max nibo ai theke better holo multiset use kora
//     DS() {}          // if DS empty hole kicuii korbe na
//     void insert(ll x)
//     {
//         se.insert(x);
//     }
//     void erase(ll x)
//     {
//         se.erase(se.find(x)); // se.erase(x)//x ar sob gula occurance deleted hoye jabe
//     }
//     ll get_max()
//     {
//         return *(--se.end()); // set always pointer return kore tai value ke point kore nilam, amar max value ta last a thakbe
//     }
//     ll get_min() // min value ta always first a thakbe
//     {
//         return *(se.begin());
//     }
//     ll get()
//     {
//         return get_max() - get_min();
//     }
//     void print()
//     {
//         for (auto x : se)
//             cout << x << ' ';
//         cout << '\n';
//     }
// } ds; // name typeccast kora neoya
// int32_t main()
// {
//     MTK;
//     int n;
//     ll k;
//     cin >> n >> k;
//     for (int i = 1; i <= n; i++)
//         cin >> a[i];
//     ll ans = 0;
//     int r = 1;
//     for (int l = 1; l <= n; l++)
//     {
//         while (r <= n)
//         {
//             ds.insert(a[r]);
//             if (ds.get() > k)
//             {
//                 ds.erase(a[r]);
//                 // ds.print();
//                 break;
//             }
//             r++;
//         }
//         ans += r - l;
//         // ds.print();
//         ds.erase(a[l]);
//     }
//     cout << ans << '\n';
//     return 0;
// }