#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

const int N = 1e5 + 7;
int arr[N], D[N], p[N]; // global initialization all value, when we initialization global any container all value is 0
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n; i++)
        D[i] = arr[i] - arr[i - 1];
    for (int i = 1; i <= n; i++)
        cout << D[i] << ' ';
    cout << '\n';
    for (int i = 1; i <= n; i++)
        p[i] = D[i] + p[i - 1];
    for (int i = 1; i <= n; i++)
        cout << p[i] << ' ';
    cout << '\n';
}