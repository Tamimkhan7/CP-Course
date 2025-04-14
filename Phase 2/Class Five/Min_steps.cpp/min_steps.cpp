#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll int long long
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
const int N = 1e5 + 9;
int step[N];
int cnt;
int min_steps(int n)
{
    cnt++;
    if (n == 1)
        return 0;
    // bascially check korte hobe age oi value ta save a ace kina
    if (step[n] != -1)
        return step[n];
    int ans = min_steps(n - 1) + 1;
    // show(ans), show(n);
    // cout << 1 << '\n';
    if (n % 2 == 0)
    {
        ans = min(ans, min_steps(n / 2) + 1);
        // show(ans), show(n);
        // cout << 2 << '\n';
    }
    if (n % 3 == 0)
    {
        ans = min(ans, min_steps(n / 3) + 1);
        // show(ans), show(n);
        // cout << 3 << '\n';
    }
    // show(n);
    // show(ans);
    step[n] = ans; // just memorized kora rakhteci ai step ar jonno value koto
    return cnt;
}
int32_t main()
{
    MTK;
    cnt = 0;
    int n;
    cin >> n;
    mem(step, -1);
    cnt = min_steps(n);
    // cout <<  << '\n';
    cout << cnt << '\n';
    return 0;
}