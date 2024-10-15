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
struct node
{
    int occ_in_mod_3[3]; // like 0 1 2 that is 3 modular
};

node t[4 * N];
int lazy[4 * N];
void push(int n, int b, int e)
{
    if (lazy[n] == 0)
        return;
    node cur = t[n];
    for (int i = 0; i < 3; i++)
        t[n].occ_in_mod_3[(i + lazy[n]) % 3] = cur.occ_in_mod_3[i];
    if (b != e)
    {
        int mid = (b + e) / 2, l = n * 2, r = n * 2 + 1;
        lazy[l] = (lazy[l] + lazy[n]) % 3; // 3 ar modular a rakhle aita akta circle hoye jabe, like 0, 1,2,, amra 0 count 1 ar count and 2 count ber korleii amra bolte parbo ke koto bar ace
        lazy[r] = (lazy[r] + lazy[n]) % 3;
    }
    lazy[n] = 0;
}
node merge(node l, node r)
{
    node ans;
    for (int i = 0; i < 3; i++)
        ans.occ_in_mod_3[i] = l.occ_in_mod_3[i] + r.occ_in_mod_3[i];
    return ans;
}
void build(int n, int b, int e)
{
    lazy[n] = 0;
    if (b == e)
    {
        t[n].occ_in_mod_3[0] = 1; // first value initilize is 1
        t[n].occ_in_mod_3[1] = 0;
        t[n].occ_in_mod_3[2] = 0;
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
        lazy[n] = v;
        push(n, b, e);
        return;
    }
    int mid = (b + e) / 2, l = n * 2, r = n * 2 + 1;
    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
    t[n] = merge(t[l], t[r]);
}

int query(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (i > e or j < b)
        return 0;
    if (i <= b and j >= e)
        return t[n].occ_in_mod_3[0]; // final value store on the top, that is i return for correct answer
    int mid = (b + e) / 2, l = n * 2, r = n * 2 + 1;
    return (query(l, b, mid, i, j) + query(r, mid + 1, e, i, j));
}
int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ":\n";
        int n, q;
        cin >> n >> q;
        build(1, 0, n - 1);
        while (q--)
        {
            int ty;
            cin >> ty;
            if (ty == 0)
            {
                int l, r;
                cin >> l >> r;
                update(1, 0, n - 1, l, r, 1);
            }
            else
            {
                int l, r;
                cin >> l >> r;
                cout << query(1, 0, n - 1, l, r) << '\n';
            }
        }
    }
    return 0;
}

// butje hobe clearly