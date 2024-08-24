#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,3,4,5};
//calculate sum of all vector element
   int ans = accumulate(v.begin(), v.end(),0);//this is return total sum of all vector element
    cout<<ans<<'\n';
}
