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
    // that are right answer
    //  string s, ss;
    //  cin >> s;
    //  int len = s.size();
    //  for (int i = 0; i < 4 - len; i++)
    //      ss += '0';
    //  for (int i = 0; i < len; i++)
    //      ss += s[i];
    //  cout << ss << endl;

    // use another solution try
    int n;
    cin >> n;
    if (n < 10)
        cout << "000" << n << endl;
    else if (n < 100)
        cout << "00" << n << endl;
    else if (n < 1000)
        cout << "0" << n << endl;
    else
        cout << n << endl;

    return 0;
}