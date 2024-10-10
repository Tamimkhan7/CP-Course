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
struct node
{
    int first_element, last_element;
    int first_element_occ, last_element_occ;
    int stronest_community_size;
};
node t[4 * N];

node merge(node l, node r)
{
    if (l.first_element == -1)
        return r;
    if (r.first_element == -1)
        return l;

    node ans;
    ans.first_element = l.first_element;
    ans.first_element_occ = l.first_element_occ;
    if (l.first_element == r.first_element)
        ans.first_element_occ += r.first_element_occ;

    ans.last_element = r.last_element;
    ans.last_element_occ = r.last_element_occ;
    if (r.last_element == l.last_element)
        ans.last_element_occ += l.last_element_occ;

    ans.stronest_community_size = max(l.stronest_community_size, r.stronest_community_size);
    if (l.last_element == r.first_element)
        ans.stronest_community_size = max(ans.stronest_community_size, l.last_element_occ + r.first_element_occ);

    return ans;
}

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n].first_element = t[n].last_element = a[b];
        t[n].first_element_occ = t[n].last_element_occ = 1;
        t[n].stronest_community_size = 1;
        return;
    }
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    if (e < i or j < b)
        return {-1, -1, -1, -1, -1}; // for ignoring
    if (i <= b and j >= e)
        return t[n];
    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ":" << '\n';
        int n, c, q;
        cin >> n >> c >> q;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        build(1, 1, n);
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            node ans = query(1, 1, n, l, r);
            cout << ans.stronest_community_size << '\n';
        }
    }
    return 0;
}