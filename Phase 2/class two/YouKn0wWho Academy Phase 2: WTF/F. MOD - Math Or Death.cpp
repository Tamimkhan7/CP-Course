#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long

int32_t main()
{
    MTK;
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << "infinity\n";
        return 0;
    }

    int diff = a - b;
    int cnt = 0;
    // cout << diff << '\n';
    for (int i = 1; i * i <= diff; i++)
    {
        if (diff % i == 0)
        {
            if (i > b)
                cnt++;
            if (diff / i != i && (diff / i) > b)
                cnt++;
        }
    }

    cout << cnt << '\n';
    return 0;
}
