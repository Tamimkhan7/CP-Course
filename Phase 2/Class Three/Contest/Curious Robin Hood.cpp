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
const int N = 1e5 + 9;
int a[N], t[N * 4];

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
    t[node] = t[l] + t[r];
}

void update1(int node, int b, int e, int i)
{
    if (b > i or i > e)
        return;
    if (b == e)
    {
        t[node] = 0;
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    update1(l, b, mid, i);
    update1(r, mid + 1, e, i);
    t[node] = t[l] + t[r];
}
void update(int node, int b, int e, int i, int x)
{
    if (b > i or i > e)
        return;
    if (b == e and b == i)
    {
        t[node] += x;
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, x);
    update(r, mid + 1, e, i, x);
    t[node] = t[l] + t[r];
}
int query(int node, int b, int e, int i, int j)
{
    if (e < i or j < b)
        return 0;
    if (i <= b and j >= e)
        return t[node];
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ":" << '\n';
        int n, q;
        cin >> n >> q;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        build(1, 1, n);
        while (q--)
        {
            int ty;
            cin >> ty;
            if (ty == 1)
            {
                int i;
                cin >> i;
                i++;
                cout << query(1, 1, n, i, i) << '\n';
                update1(1, 1, n, i);
            }
            else if (ty == 2)
            {
                int i, v;
                cin >> i >> v;
                i++;
                update(1, 1, n, i, v);
            }
            else
            {
                int l, r;
                cin >> l >> r;
                l++, r++;
                cout << query(1, 1, n, l, r) << '\n';
            }
        }
    }
    return 0;
}