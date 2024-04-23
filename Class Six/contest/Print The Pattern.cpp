#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007
void solve(int n)
{
    if (n == 0)
        return;
    solve(n - 1);
    cout << char('A' + n - 1);
    solve(n - 1);
}
int main()
{
    MTK;
    int n;
    cin >> n;
    solve(n);
    return 0;
}
