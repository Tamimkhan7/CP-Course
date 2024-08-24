#include <bits/stdc++.h>
using namespace std;
// #define MTK                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define mem(a, b) memset(a, b, sizeof(a))
// #define trace(x) cout << #x << ' ' << x << endl
// #define all(x) (x).begin(), (x).end()
// #define ll int long long
// #define mod 1000000007

int32_t main()
{
    // MTK;
    int n;
    cin >> n;
    string ans, match = "";
    for (int i = 0; i < n; i++)
        match += 'a';
    int x;
    cout << "? " << match << '\n';
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        match[i] = 'z';
        cout << "? " << match << '\n';
        int curr;
        cin >> curr;
        int pos = (x - curr + 25) / 2;
        ans += 'a' + pos;
        match[i] = 'a';
    }
    cout << "! " << ans << '\n';

    return 0;
}