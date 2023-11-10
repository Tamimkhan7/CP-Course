#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    int c[2*n];
    for(int i=0; i<n; i++)
    {
       c[i] = b[i];
    }
    for(int i=0; i<n; i++)
    {
      c[n+i] = a[i];
    }
     for(int i=0; i<n*2; i++)
    {
      cout<<c[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    solve();
}
