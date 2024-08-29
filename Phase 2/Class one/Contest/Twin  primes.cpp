#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

const int N = 2e7 + 9;
bool f[N];
int32_t main()
{
    MTK;

    f[1] = true;
    vector<int> v;
    for (int i = 2; i * i < N; i++)
    {
        if (!f[i])
        {
            v.push_back(i);
            for (int j = i * i; j < N; j += i)
                f[j] = true;
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (!f[i])
            v.push_back(i);
    }
    int n;
    while (cin >> n)
        cout << "(" << v[n] << "," << v[n + 1] << ")" << '\n';

    return 0;
}