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
int a[N];
ll t[N * 4], lazy[N * 4];

void push(int node, int b, int e)
{
    if (lazy[node] == 0)
        return;
    t[node] = t[node] | lazy[node];
    if (b != e)
    {
        int mid = (b + e) / 2;
        int l = 2 * node, r = 2 * node + 1;
        lazy[l] = (lazy[l] | lazy[node]);
        lazy[r] = (lazy[r] | lazy[node]);
    }
    lazy[node] = 0;
}

void build(int node, int b, int e)
{
    lazy[node] = 0;
    if (b == e)
    {
        t[node] = a[b]; // that is indicate zero value because that is decleare globally
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * node, r = 2 * node + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[node] = (t[l] & t[r]);
}

void update(int node, int b, int e, int i, int j, int v)
{
    push(node, b, e);

    if (e < i or j < b)
        return;
    if (i <= b and j >= e)
    {
        lazy[node] = v; // set lazy value of this node
        push(node, b, e);
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * node, r = 2 * node + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
    t[node] = (t[l] & t[r]);
}

ll query(int node, int b, int e, int i, int j)
{
    push(node, b, e);
    if (e < i or j < b)
        return (1 << 30) - 1; // doesn't exit this value
    if (i <= b and j >= e)
        return t[node];

    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    return (query(l, b, mid, i, j) & query(r, mid + 1, e, i, j));
}

int32_t main()
{
    MTK;
    int n, q;
    cin >> n >> q;

    build(1, 1, n);
    while (q--)
    {
        int ty;
        cin >> ty;
        if (ty == 1)
        {
            int l, r, v;
            cin >> l >> r >> v;
            l++;
            update(1, 1, n, l, r, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l++;
            cout << query(1, 1, n, l, r) << '\n';
        }
    }
    return 0;
}