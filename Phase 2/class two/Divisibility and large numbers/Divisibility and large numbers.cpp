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
    string a;
    int b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
        ans = (ans * 10 + (a[i] - '0')) % b;
    cout << ans << '\n';
    if (ans == 0)
        cout << "a is divisible by b\n";
    else
        cout << "sad\n";

    return 0;
}