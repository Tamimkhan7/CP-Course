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
const int N = (1 << 17) + 9;
int a[N];
int t[4 * N];
int merge(int left_node, int right_node, int seg_l, int seg_r)
{
    int seg_len = seg_r - seg_l + 1;
    int pw = 0;
    // both are correct, aitar time complexity holo log(n)
    while (seg_len > 1)
    {
        pw++;
        seg_len /= 2;
    }
    // aitar time complexity holo O(1)
    //  pw = __lg(seg_len); // aita oh 2 ar power ber kore dey
    if (pw % 2 == 0)
        return left_node ^ right_node;
    else
        return left_node | right_node;
}
void build(int node, int b, int e)
{
    if (b == e)
    {
        t[node] = a[b];
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[node] = merge(t[l], t[r], b, e);
}

void update(int node, int b, int e, int i, int v)
{
    if (b > i or i > e)
        return;
    if (b == e and b == i)
    {
        t[node] = v;
        return;
    }
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[node] = merge(t[l], t[r], b, e);
}

ll query(int node, int b, int e, int i, int j)
{
    if (i > e or j < b)
        return 0;
    if (i <= b and j >= e)
        return t[node];
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j), b, e);
}

int32_t main()
{
    MTK;
    int n, q;
    cin >> n >> q;
    n = 1 << n; // n bolte n na, n holo 2^n
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    while (q--)
    {
        int p, b;
        cin >> p >> b;
        update(1, 1, n, p, b);
        // cout << query(1, 1, n, 1, n) << '\n'; // aita diye oh kaj korbe
        cout << t[1] << '\n'; // aita diye oh answer asbe
    }
    return 0;
}
// time complexity -- O(nlogn)