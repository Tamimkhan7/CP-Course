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
    int n;
    cin >> n;
    multiset<int> tower_tops; // same value onek bar thakte pare tai multiset use korteci
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        auto it = tower_tops.upper_bound(x); // protita box ar upper bound khuje nite dekhcite oitar ceye choto value ace kina
        if (it != tower_tops.end())
        {
            tower_tops.erase(it);
            tower_tops.insert(x);
        }
        else
            tower_tops.insert(x); // jodi box a x ar choto value na pai tahole new box create kore niteci
    }

    cout << tower_tops.size() << '\n';
    // for (auto x : tower_tops)
    //     cout << x << ' ';
    // cout << '\n';
    return 0;
}
// ai khane basically multiple box ace