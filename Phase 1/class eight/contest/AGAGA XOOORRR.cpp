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
const int N = 2005;
int a[N], pref_xor[N];

int get_xor(int l, int r)
{
    // prefsum a pref_sum[r]-pref_sum[l-1]; xor ar set kaj ta kore just xor korte hoy
    return pref_xor[r] ^ pref_xor[l - 1]; // pre[l]..pre[l+1].....pre[r];
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pref_xor[i] = pref_xor[i - 1] ^ a[i];
        }
        bool ok = false;
        for (int i = 1; i < n; i++)
        {
            int x = get_xor(1, i);
            int y = get_xor(i + 1, n);
            if (x == y)
            {
                ok = true;
                break;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int x = get_xor(1, i);
                int y = get_xor(i + 1, j);
                int z = get_xor(j + 1, n);
                if (x == y and y == z)
                {
                    ok = true;
                    break;
                }
            }
        }
        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}