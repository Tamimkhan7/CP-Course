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
const int N = 5e5 + 9;
int a[N], b[N], Q[N], d[N * 3];
int t[3 * N * 4];

void build(int node, int b, int e)
{
    if (b == e)
    {
        t[node] = 0;
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[node] = t[l] + t[r];
}

void update(int node, int b, int e, int i, int x)
{
    if (b > i or i > e)
        return;
    if (b == e)
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
        // doing coordinate compression
        set<int> se;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i] >> b[i];
            se.insert(a[i]);
            se.insert(b[i]);
        }
        for (int i = 1; i <= q; i++)
        {
            cin >> Q[i];
            se.insert(Q[i]);
        }

        map<int, int> mp;
        int id = 0;
        for (auto x : se)
            mp[x] = ++id;

        for (int i = 1; i <= n; i++)
        {
            a[i] = mp[a[i]];
            b[i] = mp[b[i]];
        }
        for (int i = 1; i <= q; i++)
            Q[i] = mp[Q[i]];

        build(1, 1, id);
        // coordinate compression done
        for (int i = 1; i <= n; i++)
        {
            int l = a[i], r = b[i];
            update(1, 1, id, l, 1);
            if (r + 1 <= id)
                update(1, 1, id, r + 1, -1);
        }
        for (int i = 1; i <= q; i++)
        {
            int x = Q[i];
            cout << query(1, 1, id, 1, x) << '\n';
        }

        // for (int i = 1; i <= id; i++)
        //     d[i] = 0;
    }
    return 0;
}

   /*

    straightforward answer
    for (int i = 1; i <= n; i++)
        {
            cin >> a[i] >> b[i];
            for (int k = a[i]; k <= b[i]; k++)
                ans[k]++;
        }
        while (q--)
        {
            int k;
            cin >> k;
            cout << ans[k] << '\n';
  }*/