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
int a[N], t[N * 4]; // maximum node of each level visit at most 4 time//maximum node of the n node tree is 4*n

void build(int node, int b, int e) // node means each index  of there node, b means beginning, e means ending
{
    if (b == e) // base case or ending case of recursion
    {
        t[node] = a[b];
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[node] = t[l] + t[r];
}

int query(int node, int b, int e, int i, int j)
{
    if (e < i or j < b)
        return 0;
    if (i <= b and j >= e)
        return t[node];
    // otherwise going left of right path then check each node
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
void update(int node, int b, int e, int i, int x)
{
    if (b > i or i > e)
        return;
    if (b == e and b == i)
    {
        // jei index ta update korbo oita cole aste oita sum a add kore dibo
        // leef node a cole asle oi node ar value ta update kore baki gula update kore dicci
        t[node] = x;
        return;
    }
    int l = 2 * node, r = 2 * node + 1;
    int mid = (b + e) / 2;
    // x value ta i index a update kore deoyar por, jei index gular upor diye asce oi gula to update kora lagbe
    update(l, b, mid, i, x);
    update(r, mid + 1, e, i, x);
    t[node] = t[l] + t[r]; // jei node gular upor diye geci oi gula update kore oi value ta sum kore dicci
}
int32_t main()
{
    MTK;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    cout << t[1] << '\n';
    // [1,2,3,4,5]
    cout << query(1, 1, n, 2, 4) << '\n';
    update(1, 1, n, 3, 15); // 3th index a 15 diye update kore dilam

    // [1,2,15,4,5]
    cout << query(1, 1, n, 2, 4) << '\n';
    return 0;
}