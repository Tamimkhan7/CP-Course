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
bool is_beautiful_year(int n)
{
    int d4 = n % 10;
    n /= 10;
    int d3 = n % 10;
    n /= 10;
    int d2 = n % 10;
    n /= 10;
    int d1 = n;
    if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4)
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
    n++;
    while (1)
    {
        if (is_beautiful_year(n))
        {
            cout << n << endl;
            return 0;
        }
        n++;
    }
    return 0;
}