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
const int N = 5e4 + 9, inf = 1e9 + 9;
int a[N];
struct node
{
    int max_subarry_sum, max_suffix_sum, max_prefix_sum;
    int total_sum;
};
node t[4 * N];

node merge(node l, node r)
{
    if (l.total_sum == inf)
        return r;
    if (r.total_sum == inf)
        return l;
    node ans;
    ans.max_subarry_sum = max(l.max_subarry_sum, r.max_subarry_sum);
    ans.max_subarry_sum = max(ans.max_subarry_sum, l.max_suffix_sum + r.max_prefix_sum); // if any element cross the middle point

    // now updating range by the value
    ans.max_prefix_sum = max(l.max_prefix_sum, l.total_sum + r.max_prefix_sum); // update to the left side by the value
    ans.max_suffix_sum = max(r.max_suffix_sum, r.total_sum + l.max_suffix_sum); // update to the right side by the value

    ans.total_sum = l.total_sum + r.total_sum;
    return ans;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n].max_subarry_sum = a[b];
        t[n].max_prefix_sum = a[b];
        t[n].max_suffix_sum = a[b];
        t[n].total_sum = a[b];
        return;
    }
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}

void update(int n, int b, int e, int i, int v)
{
    if (b > i or i > e)
        return;
    if (b == e)
    {
        t[n].max_subarry_sum = v;
        t[n].max_prefix_sum = v;
        t[n].max_suffix_sum = v;
        t[n].total_sum = v;
        return;
    }
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    if (e < i or j < b)
        return {inf, inf, inf, inf};
    if (i <= b and j >= e)
        return t[n];
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    int q;
    cin >> q;
    while (q--)
    {
        int ty;
        cin >> ty;
        if (ty == 0)
        {
            int i, x;
            cin >> i >> x;
            update(1, 1, n, i, x);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            node ans = query(1, 1, n, l, r);
            cout << ans.max_subarry_sum << '\n';
        }
    }
}