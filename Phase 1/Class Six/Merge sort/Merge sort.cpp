#include <bits/stdc++.h>
using namespace std;
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
vector<int> get_marge(int l, int r)
{
    if (l == r)
        return {a[l]};
    int mid = (l + r) / 2;
    auto L = get_marge(l, mid);
    auto R = get_marge(mid + 1, r);
    return merge(L, R);
}
int32_t main()
{    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> ans = get_marge(0, n - 1);
    for (int i = 0; i < n; i++)
        cout << ans[i] << ' ';
    cout << '\n';
}