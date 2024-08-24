#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll unsigned int
#define mod 1000000007
const ll Max_value = (1u << 31); // (2^32 does not contain into unsigned int)2^31 neoyar mane holo jate kore amar value ta unsigned int overcome na kore jeteto amake 2^32 dara mod korte bolce tate somossa nei 2^31 nile oh
bitset<Max_value> exist;
int32_t main()
{
    MTK;
    int q;
    ll s, a, b;
    cin >> q >> s >> a >> b;
    // set<ll> se;
    // vector<bool> exist(Max_value, false);

    long long sum = 0;
    while (q--)
    {
        ll x = s / 2;
        if (s & 1)
        {
            // if (se.find(x) == se.end())
            //     se.insert(x);
            if (!exist[x])
            {
                exist[x] = true; // insert to the value of the vector, when my value is not contain to the vector
                sum += x;
            }
        }
        else
        {
            // if (se.find(x) != se.end())
            //     se.erase(x);
            if (exist[x])
            {
                exist[x] = false; // remove to the value when my x value is present to the vector
                sum -= x;
            }
        }
        s = (a * s + b); // mod  2^32 that is does not store to the integer,, that is store to the unsigned int
        // amra jodi value gula unsigned a rakhi tahole ar unsigned diye mod kora lage na ai gula auto ai cole ase unsigned ar modde
    }

    // for (auto x : se)
    //     ans += x;
    cout << sum << '\n';
    return 0;
}
// code is correct, total time complexity (Qlogq)
// but amader solve korte hobe q ar modde