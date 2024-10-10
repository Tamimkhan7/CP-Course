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
ll t[N * 4];

void build(int node, int b, int e)
{
    if (b == e) // jodi last index a cole asi, mane holo beginnig and ending is equal hoy tahole oii value ta update kore dite hobe
    {
        t[node] = a[b];
        return;
    }
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);      // left a giye check korbo
    build(r, mid + 1, e);  // right a giye check korbo
    t[node] = t[l] + t[r]; // oi range a thake tahole add kore dibo
}

ll query(int node, int b, int e, int i, int j)
{
    if (i > e or j < b) // jodi oi range a na thake tahole to kicu return korar dorkar nai,, tahole 0 return kore dibo
        return 0;
    if (i <= b and j >= e)
        return t[node]; // jodi oi range ar modde thake tahole oi node ar value ta return kore dibo
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

void update(int node, int b, int e, int i, int x)
{
    if (b > i or i > e)
        return; // jodi oi range ar modde na thake tahole kicu add kora dorkar nai
    if (b == e and b == i)
    {
        t[node] = x; // jodi oi range ar modde thaole tahole oi range ke x ar value dara  update kore dibo
        return;
    }
    int l = node * 2, r = node * 2 + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, x);
    update(r, mid + 1, e, i, x);
    t[node] = t[l] + t[r];
}
int32_t main()
{
    MTK;
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
            int i, v;
            cin >> i >> v;
            i++;
            update(1, 1, n, i, v);
        }
        else
        {
            int l, r;
            cin >> l >> r;
            ++l;

            cout << query(1, 1, n, l, r) << '\n';
        }
    }
    return 0;
}