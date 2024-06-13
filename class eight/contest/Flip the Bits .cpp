#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << "YES" << '\n';
        return;
    }

    int zero_count = 0, one_count = 0;
    vector<int> prefix(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
            zero_count++;
        else
            one_count++;
        prefix[i + 1] = zero_count - one_count;
        // cout << prefix[i + 1] << ' ';
    }
    // cout << '\n';
    bool flag = true;
    bool flipped = false;

    for (int i = n - 1; i >= 0; i--)
    {
        char current_a = (flipped) ? (a[i] == '0' ? '1' : '0') : a[i];
        // cout << current_a << ' ';
        if (current_a != b[i])
        {
            if (prefix[i + 1] != 0)
            {
                flag = false;
                break;
            }
            flipped = !flipped;
        }
    }

    if (flag)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
}
bool solve1()
{
    string a, b;
    int n;
    cin >> n >> a >> b;
    for (int i = 0, cnt = 0; i < n; i++)
    {
        cnt += (a[i] == '1' ? 1 : -1);
        cout << cnt << '\n';
        if ((a[i] == b[i]) != (a[i + 1] == b[i + 1]) && cnt)
            return 0;
    }
    return 1;
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        cout << (solve1() ? "YES\n" : "NO\n");
    }
    return 0;
}
