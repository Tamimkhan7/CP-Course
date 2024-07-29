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
const int N = 1e5 + 9, Max_value = 4009;
bitset<Max_value> pref_a[N], pref_b[N];
int a[N], b[N];
int32_t main()
{
    MTK;
    int n, m, q;
    cin >> n >> m >> q;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    pref_a[0].reset(); // make all bit if off
    for (int i = 1; i <= n; i++)
    {
        pref_a[i] = pref_a[i - 1];
        pref_a[i].flip(a[i]);
    }
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    pref_b[0].reset(); // make all bit if off
    for (int i = 1; i <= m; i++)
    {
        pref_b[i] = pref_b[i - 1];
        pref_b[i].flip(b[i]); // flip to the all bit
    }
    while (q--)
    {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        auto x = pref_a[r1] ^ pref_a[l1 - 1];
        auto y = pref_b[r2] ^ pref_b[l2 - 1];
        auto merged_ans = x ^ y;                 // merger two subarray
        auto set_bit_count = merged_ans.count(); // count set bit to the mergeing value
        cout << set_bit_count << '\n';
    }
    return 0;
}