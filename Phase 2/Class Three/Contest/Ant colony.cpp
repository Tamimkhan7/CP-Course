#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e5 + 9, INF = 1e9 + 9;
int a[N];

struct node
{
    int gcd, mn, mn_cnt;
};
node t[N * 4];

node merge(node l, node r)
{
    node ans;
    ans.gcd = __gcd(l.gcd, r.gcd);
    ans.mn = min(l.mn, r.mn);
    ans.mn_cnt = 0;
    if (l.mn == ans.mn)
        ans.mn_cnt += l.mn_cnt;
    if (r.mn == ans.mn)
        ans.mn_cnt += r.mn_cnt;
    return ans;
}
void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n].gcd = a[b]; // let assume that is our gcd at now
        t[n].mn = a[b];  // let assume that is our minimum value at a time
        t[n].mn_cnt = 1; // let assume minimum value count is 1
        return;
    }
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    if (i > e or j < b)
        return {0, INF, 0}; // if our range is over then we will declare the value of the gcd , min_value and min_count, although that is not any effect  my answer
    if (i <= b and j >= e)
        return t[n];
    int l = n * 2, r = n * 2 + 1;
    int mid = (b + e) / 2;
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
        int l, r;
        cin >> l >> r;
        node ans = query(1, 1, n, l, r);
        int res = 0;
        if (ans.gcd == ans.mn)
            res += ans.mn_cnt;
        cout << (r - l + 1) - res << '\n';

        // vector<int> v;
        // int gcd = 0;
        // for (int i = l; i <= r; i++)
        // {
        //     v.push_back(a[i]);
        //     gcd = __gcd(gcd, a[i]);
        // }
        // ll size = r - l + 1, ans = 0;
        // sort(all(v));
        // int mn = *min_element(all(v));
        // if (mn == gcd)
        //     ans = upper_bound(all(v), mn) - lower_bound(all(v), mn);

        // cout << size - ans << '\n';
    }
    return 0;
}