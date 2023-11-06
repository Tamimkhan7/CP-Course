#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    long long int ans=0,sum=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x==1)ans++;
        else ans=0;
        sum +=ans;
    }
    cout<<sum<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
