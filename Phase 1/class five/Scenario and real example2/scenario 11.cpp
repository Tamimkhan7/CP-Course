#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
const int N = 1005;

int main()
{
    faster;
    int n, k;
    cin >> n >> k;
    bitset<N> bs[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        bs[i] = bitset<N>(s); // insert the string into bitset
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((bs[i] ^ bs[j]).count() <= k) // find the all set bit
                ans++;
        }
    }
    cout << ans << '\n';
}