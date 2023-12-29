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
int main()
{
    faster;
    int k, s;
    cin >> k >> s;
    int c = 0;
    for (int i = 0; i <= k; i++) // sob value dekhbo ace kina
    {
        for (int j = 0; j <= k; j++)
        {
            // for (int p = 0; p <= k; p++){ ai logic ta use korle overflow hocce tai other logic try kora hoyce
            //     if(i+j+p==s)
            //         c++;
            // }
            int z = s - i - j; // ai khane dekhbo je i and j ar value ta substraction korbo s theke tahole pabo z ar man 0 theke k projnto jodi pai tahole milbe othewise value milbe na
            if (z >= 0 && z <= k)
                c++;
        }
    }
    cout << c << endl;
    return 0;
}