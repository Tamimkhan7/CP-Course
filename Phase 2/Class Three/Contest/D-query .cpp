#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int N = 3e4 + 9, query_size = 2e5 + 9;
int t[4 * N];
int a[N];

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n] = 0;
        return;
    }
    int mid = (b + e) / 2, l = n * 2, r = n * 2 + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = (t[l] + t[r]);
}

void update(int n, int b, int e, int i, int v)
{
    if (e < i or i < b)
        return;
    if (i <= b and i >= e)
    {
        t[n] += v;
        return;
    }

    int mid = (e + b) / 2;
    int l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = (t[l] + t[r]);
}

int query(int n, int b, int e, int i, int j)
{
    if (i > e or j < b)
        return 0;
    if (i <= b and j >= e)
        return t[n];
    int mid = (b + e) / 2, l = n * 2, r = n * 2 + 1;
    return (query(l, b, mid, i, j) + query(r, mid + 1, e, i, j));
}
vector<pair<int, int>> Q[N];
int ans[query_size];
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        Q[r].push_back({l, i});
    }

    build(1, 1, n);
    map<int, int> last_occurance;
    for (int r = 1; r <= n; r++)
    {
        if (last_occurance.find(a[r]) != last_occurance.end())
            update(1, 1, n, last_occurance[a[r]], -1);
        last_occurance[a[r]] = r;
        update(1, 1, n, r, +1);
        for (auto [l, id] : Q[r])
            ans[id] = query(1, 1, n, l, r);
    }

    for (int i = 1; i <= q; i++)
        cout << ans[i] << '\n';

    return 0;
}