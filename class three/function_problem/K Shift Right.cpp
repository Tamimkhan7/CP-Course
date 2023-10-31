#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)
    {
        cout<<(a[i]>>x)<<" ";
    }
    cout<<endl;
}
int main()
{
    solve();
}
