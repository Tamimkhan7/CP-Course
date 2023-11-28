#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+9;
int a[N], pre[N];
void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int ans = a[0];//INT_MAX diye oh kora jeto,, INT_MAX diye ja and korbo tai asbe
        for(int i=1;  i<n; i++)
        {
            ans&=a[i];
        }

    if(ans<k)
    {
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
