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
vector<int> v;
auto merge(vector<int> l, vector<int> r)
{
    vector<int> ans;
    int n = l.size(), m = r.size();
    int i = 0, j = 0;
    while (i < n and j < m)
    {
        if (l[i] < r[j])
        {
            ans.push_back(l[i]);
            i++;
        }
        else
        {
            ans.push_back(r[j]);
            j++;
        }
    }
    while (i < n)
    {
        ans.push_back(l[i]);
        i++;
    }
    while (j < m)
    {
        ans.push_back(r[j]);
        j++;
    }
    return ans;
}
vector<int> merge_sort(int l, int r)
{
    if (l == r)
        return {v[l]};
    int mid = (l + r) / 2;
    auto L = merge_sort(l, mid);
    auto R = merge_sort(mid + 1, r);
    return merge(L, R);
}
int32_t main()
{
    MTK;
    int n;
    while (cin >> n)
        v.push_back(n);
    int l = 0, r = v.size() - 1;
    auto ans = merge_sort(l, r);
    for (auto x : ans)
        cout << x << ' ';
}