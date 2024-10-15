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

const int N = 1e5 + 9, B = 20;
struct node
{
    int on[B], off[B];
};
int a[N];
node t[N * 4];
int lazy[4 * N];

void push(int n, int b, int e)
{
    if (lazy[n] == 0)
        return;
    for (int k = 0; k < B; k++)
    {
        if ((lazy[n] >> k) & 1)
            swap(t[n].on[k], t[n].off[k]); // swap number of on one to the number of off zero
    }

    if (b != e)
    {
        int mid = (b + e) / 2;
        int l = 2 * n, r = 2 * n + 1;
        lazy[l] ^= lazy[n];
        lazy[r] ^= lazy[n];
    }
    lazy[n] = 0;
}

node merge(node l, node r)
{
    node ans;
    for (int k = 0; k < B; k++)
    {
        ans.on[k] = l.on[k] + r.on[k];    // left on plus right number of on
        ans.off[k] = l.off[k] + r.off[k]; // left number of on plus right number of on
    }
    for (int k = 0; k < B; k++)
    {
        ans.on[k] = l.on[k] + r.on[k];    // left on plus right number of on
        ans.off[k] = l.off[k] + r.off[k]; // left number of on plus right number of on
    }
    return ans;
}

void build(int n, int b, int e)
{
    lazy[n] = 0;
    if (b == e)
    {
        for (int k = 0; k < B; k++)
        {
            if ((a[b] >> k) & 1)
            {
                t[n].on[k] = 1;
                t[n].off[k] = 0;
            }
            else
            {
                t[n].on[k] = 0;
                t[n].off[k] = 1;
            }
        }
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}
void update(int n, int b, int e, int i, int j, int v)
{
    push(n, b, e);
    if (e < i or j < b)
        return;
    if (i <= b and j >= e)
    {
        lazy[n] = v;
        push(n, b, e);
        return;
    }

    int mid = (e + b) / 2;
    int l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (e < i or j < b)
    {
        node zero;
        memset(zero.on, 0, sizeof zero.on);   // all number of on bit  put on the 0
        memset(zero.off, 0, sizeof zero.off); // all number of off bit put on the 0
        return zero;
    }
    if (i <= b and j >= e)
        return t[n];

    int mid = (b + e) / 2;
    int l = 2 * n, r = 2 * n + 1;
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
        if (ty == 2)
        {
            int l, r, x;
            cin >> l >> r >> x;
            update(1, 1, n, l, r, x);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            node ans = query(1, 1, n, l, r);
            ll sum = 0;
            for (int k = 0; k < B; k++)
                sum += 1LL * ans.on[k] * (1LL * 1 << k);

            cout << sum << '\n';
        }
    }

    return 0;
}