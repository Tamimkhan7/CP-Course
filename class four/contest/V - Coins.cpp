#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+9;
int a[N], pre[N];
int main()
{
    int n,s;
    cin>>n>>s;
    int ans=0;
    while(s>=n)
    {
        ans++;
       s-=n;
    }
    if(s!=0)ans++;
    cout<<ans<<'\n';
}
