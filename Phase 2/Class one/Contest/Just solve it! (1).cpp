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
    int n;
    cin >> n;

    for (int j = 0; j < n; j++)
    {
        int x;
        cin >> x;
        int y = x;

        ll sum = 0, cnt = 0;
        for (int i = 1; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                sum += i;
                cnt++;
                if (i != x / i)
                {
                    sum += x / i;
                    cnt++;
                }
            }
        }
        vector<int> prime;
        for (int i = 2; i * i <= y; i++)
        {
            if (y % i == 0)
            {
                while (y % i == 0)
                {
                    prime.push_back(i);
                    y /= i;
                }
            }
        }

        if (y > 1)
            prime.push_back(y);

        set<int> se(prime.begin(), prime.end());

        if (!prime.empty())
            cout << prime[0] << ' ' << prime[prime.size() - 1] << ' ' << se.size() << ' ' << prime.size() << ' ' << cnt << ' ' << sum << '\n';
    }

    return 0;
}
