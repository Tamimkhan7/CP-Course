#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << ' ';
    }
    cout << '\n';
    return 0;
}

// time_complexity = O(n)