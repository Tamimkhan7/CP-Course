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

const int N = 1e5 + 7;
int D[N];
int32_t main()
{
    MTK;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            D[j]++;
        }
    }
    for (int i = 1; i <= N; i++)
        cout << i << ' ' << D[i] << '\n';
    cout << '\n';
    return 0;
}