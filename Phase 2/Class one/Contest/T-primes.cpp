
/*T-prime means jeitar 3 ta divisor thake but amra jani divisor count hoy holo -- p1^(e1+1)p2^(e2+1)...........pk(ek+1)*/
/* we know divisor count formula is -- (e1+1)*(e2+1)*,,,,,,,,(ek+1),,, that's means t-pirme is means e-2 aita hole ami bolte parbo oita amar t-prime*/

#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007
const int N = 1e6 + 9;
bool is_prime[N];
void sieve()
{
    is_prime[1] = false;
    for (int i = 2; i < N; i++)
        is_prime[i] = true;
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i + i; j < N; j += i)
                is_prime[j] = false;
        }
    }
}
int32_t main()
{
    MTK;
    sieve();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        int sq = sqrtl(x);
        // better practices for sqrt function
        while (1LL * sq * sq > x)
            sq--;
        while (1LL * sq * sq < x)
            sq++;
        if (1LL * sq * sq == x and is_prime[sq])
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
