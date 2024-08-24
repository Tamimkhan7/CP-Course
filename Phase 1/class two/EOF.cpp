// EOF means = end of the file
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // ami jani na koyta file input nibo tai ami akta infinite loop nibo
    int ans = 0;
    // for example = 10 20 30 40 50 60 so on
    // joto element pabo sob element ar sum kore dibo
    while (cin >> n)
    {
        ans += n; // jotokkhnon projnto ami input pabo totokkn projnto ami input nite thakbo
    }
    cout << ans << endl;
}