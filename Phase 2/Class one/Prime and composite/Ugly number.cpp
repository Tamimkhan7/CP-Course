#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
#define all(x) (x).begin(), (x).end()
const int N = 1e18;
int32_t main()
{
    MTK;
    // like 10 = 2^1*3^0*5^1// that is ugly numbers
    vector<ll> ugly_num;
    ll p2 = 1;
    // let assume total number of time this loop consider about 60's 
    for (int x = 0; p2 <= N; x++, p2 *= 2)
    {
        // p2 = 2^x
        ll p3 = 1;
        for (int y = 0; p2 * p3 <= N; y++, p3 *= 3)
        {
            // p3 =3^y
            ll p5 = 1;
            for (int z = 0; p2 * p3 * p5 <= N; z++, p5 *= 5)
            {
                // p5 = 5^z
                ugly_num.push_back(p2 * p3 * p5);
            }
        }
    }
    sort(all(ugly_num));
    cout << "The 1500'th ugly number is " << ugly_num[1499] << "." << endl;

    return 0;
}
/* vector<ll> v(1500);
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
    // cout << '\n';*/