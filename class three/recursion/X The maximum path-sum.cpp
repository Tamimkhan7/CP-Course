#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n, int x)
{
    while(x--)
    {
        int ans = a[n];
        for(int i=n-1; i>0; i--)
        {
            a[i+1] = a[i];
        }
        a[1]= ans;
    }
    for(int i=1; i<=n; i++)cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
}
