#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
#define all(x) x.begin(), x.end()
#define mod 1000000007
const int N = 1e6 + 9;
vector<int> a(N);
int n;
vector<int> merge(vector<int> l, vector<int> r)
{
    vector<int> ans;
    int n = l.size(), m = r.size();
    int i = 0, j = 0;
    while (i < n and j < m)
    {
        if (l[i] < r[j])
            ans.push_back(l[i++]);
        else
            ans.push_back(r[j++]);
    }
    while (i < n)
        ans.push_back(l[i++]);
    while (j < m)
        ans.push_back(r[j++]);
    return ans;
}
vector<int> get_marge(int l, int r)
{
    if (l == r)
        return {a[l]};
    int mid = (l + r) / 2;
    vector<int> left = get_marge(l, mid);
    vector<int> right = get_marge(mid + 1, r);
    return merge(left, right);
}
int32_t main()
{
    MTK;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> ans = get_marge(0, n - 1);
    for (int i = 0; i < n; i++)
        cout << ans[i] << ' ';
    cout << '\n';
}