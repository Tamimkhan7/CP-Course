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

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        bool ok = true;
        for (int i = 1; i <= min(n, 21); i++)
        {
            bool flag = false;
            for (int j = 1; j <= i; j++)
            {
                if (v[i] % (j + 1) != 0)
                    flag = true;
            }
            if (!flag)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}

/*#include <bits/stdc++.h>
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

const int N = 1e6 + 9;
int spf[N];
void spf_no()
{
    MTK;
    for (int i = 1; i < N; i++)
        spf[i] = i;
    for (int i = 2; i < N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i; j < N; j += i)
                spf[j] = min(spf[j], i);
        }
    }
}

int32_t main()
{
    MTK;
    spf_no();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x = v[i];

            while (x > 1 && x % spf[x] == 0)
            {
                x /= spf[x];
                cnt++;
            }
        }

        cout << cnt << '\n';

    }
    return 0;
}*/