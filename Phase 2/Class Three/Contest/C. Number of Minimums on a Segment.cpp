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
const int N = 1e5 + 9, MAX = 1e9 + 9;
int a[N];

struct node
{
    int mn, count;
};

node t[N * 4];
node merge(node l, node r)
{ // left node, and right node
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.count = 0;
    if (l.mn == ans.mn)
        ans.count += l.count;
    if (r.mn == ans.mn)
        ans.count += r.count;
    return ans;
}
void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n].mn = a[b]; // 1 length ar hole minimum value oy nijeii
        t[n].count = 1; // 1 length ar hole minimum oy nijeiii
        return;
    }
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}
void update(int n, int b, int e, int i, int x)
{
    if (b > i or i > e)
        return;
    if (b == e)
    {
        t[n].mn = x;
        t[n].count = 1;
        return;
    }
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2;
    update(l, b, mid, i, x);
    update(r, mid + 1, e, i, x);
    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    if (i > e or j < b)
        return {MAX, 1}; // max deoyar mane hole minimum value khujteci ar oi value gular count khujteci ai jonno 1 diye start korci
    if (i <= b and j >= e)
        return t[n];

    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
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
            node ans = query(1, 1, n, l, r);
            cout << ans.mn << ' ' << ans.count << '\n';
        }
    }
    return 0;
}