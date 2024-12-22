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
int min_steps(int n)
{
    if (n == 1)
        return 0;
    // bascially check korte hobe age oi value ta save a ace kina
    if (step[n] != -1)
        return step[n];
    int ans = min_steps(n - 1) + 1;
    if (n % 2 == 0)
        ans = min(ans, min_steps(n / 2) + 1);
    if (n % 3 == 0)
        ans = min(ans, min_steps(n / 3) + 1);
    step[n] = ans; // just memorized kora rakhteci ai step ar jonno value koto
    return step[n];
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    mem(step, -1);
    cout << min_steps(n) << '\n';
    return 0;
}