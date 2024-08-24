#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
bool is_prime(int n)
{
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool is_almost_prime(int n)
{

    int p = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (is_prime(i))
            {
                p++;
           
            }
        }
    }
    if (p == 2)
    {
     
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    faster;
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (is_almost_prime(i))
        {
            cout << i << " ";
            ans++;
            // cout << ans << " ";
        }
    }
    cout << ans << endl;
    return 0;
}