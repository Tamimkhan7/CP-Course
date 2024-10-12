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
ll t[4 * N], lazy[4 * N];
void push(int n, int b, int e){
    
}
void build(int n, int b, int e)
{
    lazy[n] = 0;
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    int mid = (b + e) / 2, l = n * 2, r = n * 2 + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}
void update(int n, int b, int e, int i, int j, int v)
{
    push(n, b, e);
    if (i > e or j < b)
        return;
    if (i <= b and j >= e)
    {
        t[n] = v;
        push(n, b, e);
        return;
    }
    int mid = (b + e) / 2, l = n * 2, r = n * 2 + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
    t[n] = merge(t[l], t[r]);
}

ll query(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (i > e or j < b)
        return 0;
    if (i <= b and j >= e)
        return t[n];
    int mid = (b + e) / 2, l = n * 2, r = n * 2 + 1;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}
int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        build(1, 1, n);
        while (q--)
        {
            int ty;
            cin >> ty;
            if (ty == 0)
            {
                int l, r;
                cin >> l >> r;
                l++, r++;
                update(1, 1, n, l, r, 1);
            }
            else
            {
                int l, r;
                cin >> l >> r;
                l++, r++;
                query(1, 1, n, l, r);
            }
        }
    }
    return 0;
}