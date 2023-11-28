#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+9;
void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    int pre[n+1];
    for(int i=0; i<n; i++)cin>>a[i];
    pre[-1]=0;
    for(int i=0; i<n; i++)
    {
        pre[i] = a[i]+pre[i-1];
    }

//fix kore cinta korte hobe basically

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
