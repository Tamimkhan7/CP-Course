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
ll t[4 * N], lazy[N * 4];

void push(int node, int b, int e)
{
    if (lazy[node] == 0)
        return;
    t[node] = t[node] + 1LL * lazy[node] * (e - b + 1);

    if (b != e)
    {
        int mid = (b + e) / 2, l = node * 2, r = node * 2 + 1;
        lazy[l] += lazy[node];
        lazy[r] += lazy[node];
    }
    lazy[node] = 0;
}
void build(int node, int b, int e)
{
    if (b == e)
    {
        t[node] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = node * 2, r = node * 2 + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[node] = t[l] + t[r];
}
void update(int node, int b, int e, int i, int j, int v)
{
    push(node, b, e); // when updating is comming i will pushing lazy value of the lazy noded
    if (e < i or j < b)
        return;
    if (i <= b and e <= j)
    {
        lazy[node] = v;
        push(node, b, e); // for safe exits i will pushing lazy value
        return;
    }
    int mid = (b + e) / 2, l = node * 2, r = node * 2 + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
    t[node] = t[l] + t[r];
}
ll query(int node, int b, int e, int i, int j)
{
    push(node, b, e);
    if (e < i or j < b)
        return 0;
    if (i <= b and e <= j)
        return t[node];
    int mid = (b + e) / 2, l = node * 2, r = node * 2 + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
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
            int i;
            cin >> i;
            i++;
            cout << query(1, 1, n, i, i) << '\n';
        }
    }
    return 0;
}