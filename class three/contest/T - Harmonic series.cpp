#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    double ans=0;
    for(int i=1; i<=n;i++){
        ans += (1/(double)i);
    }
    cout<<setprecision(5)<<ans<<endl;
}
int main()
{

   solve();
}
