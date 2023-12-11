#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{9,4,3,8,5};
//all of time complexity O(n)
    int ans = *min_element(v.begin(), v.end());//this is return minimuum element of all vector element
    int ans2 = *max_element(v.begin(), v.end());//this is return maximum element
    cout<<ans<<' '<<ans2<<'\n';
}
