// jar tinta divisor ace se holo composite

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
    vector<int> composite;
    for (int i = 2; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
                cnt++;
        }
        if (cnt == 2)
            composite.push_back(i);
    }
    cout << "total number of composite:- " << composite.size() << '\n';
    sort(all(composite));
    for (auto x : composite)
        cout << x << ' ';
    cout << '\n';
    return 0;
}