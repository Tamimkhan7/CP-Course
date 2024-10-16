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

const int N = 2e5 + 9, B = -1e6 + 9;
const ll INF = 1e14 + 9;
int a[N];
ll t[N * 4], lazy[4 * N];

void push(int node, int b, int e)
{
    if (lazy[node] == 0)
        return;
    t[node] = t[node] + lazy[node];
    if (b != e)
    {
        int mid = (b + e) / 2;
        int l = 2 * node, r = 2 * node + 1;
        lazy[l] += lazy[node];
        lazy[r] += lazy[node];
    }
    lazy[node] = 0;
}

void build(int node, int b, int e)
{
    lazy[node] = 0;
    if (b == e)
    {
        t[node] = a[b];
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * node, r = 2 * node + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[node] = min(t[l], t[r]);
}

void update(int node, int b, int e, int i, int j, int v)
{
    push(node, b, e);

    if (e < i or j < b)
        return;
    if (i <= b and j >= e)
    {
        lazy[node] = v;
        push(node, b, e);
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * node, r = 2 * node + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
    t[node] = min(t[l], t[r]);
}

ll query(int node, int b, int e, int i, int j)
{
    push(node, b, e);
    if (e < i or j < b)
        return INF;
    if (i <= b and j >= e)
        return t[node];

    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    return min(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
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
    cin.ignore();
    while (q--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        int l, r, v;
        ss >> l >> r;
        l++, r++; // 1 indexing of l and r
        if (ss >> v)
        {
            if (l <= r)
                update(1, 1, n, l, r, v);
            else
            {
                // all element added to the v of this segment
                update(1, 1, n, l, n, v);
                update(1, 1, n, 1, r, v);
            }
        }
        else
        {
            ll ans;
            if (l <= r)
                ans = query(1, 1, n, l, r);
            else
            {
                // find min value of all element of this segment
                ans = query(1, 1, n, l, n);
                ans = min(ans, query(1, 1, n, 1, r));
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
