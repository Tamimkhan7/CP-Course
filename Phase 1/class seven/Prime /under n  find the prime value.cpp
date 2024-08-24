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
const int N = 1e7 + 9;
int D[N];
int32_t main()
{
    MTK;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
            D[j]++;
    }

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (D[i] == 2)
            cout << i << '\n';
    }
    cout << '\n';
    return 0;
}