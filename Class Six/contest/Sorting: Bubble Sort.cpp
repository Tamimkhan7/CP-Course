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

int32_t main()
{
    MTK;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                cnt++;
                swap(a[i], a[j]);
            }
        }
    }
    cout << "Array is sorted in " << cnt << " swaps." << '\n';
    cout << "First Element: " << a[0] << '\n';
    cout << "Last Element: " << a[n - 1] << '\n';
}