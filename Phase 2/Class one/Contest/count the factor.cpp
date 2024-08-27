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
    int y;
    while (cin >> y and y != 0)
    {
        int x = y;
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
        set<int> se(all(prime));
        cout << x << " : " << se.size() << '\n';
    }
    return 0;
}