#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int32_t main()
{
    MTK;

    vector<ll> v(1500);
    v[0] = 1;
    ll x = 0, y = 0, z = 0;
    ll next2 = 2, next3 = 3, next5 = 5;

    for (int i = 1; i < 1500; i++)
    {
        ll value = min(next2, min(next3, next5));
        v[i] = value;
        // cout << value << ' ';

        if (value == next2)
        {
            x++;
            next2 = v[x] * 2;
        }
        if (value == next3)
        {
            y++;
            next3 = v[y] * 3;
        }
        if (value == next5)
        {
            z++;
            next5 = v[z] * 5;
        }
    }
    // cout << '\n';
    cout << "The 1500'th ugly number is " << v[1499] << "." << endl;

    return 0;
}
