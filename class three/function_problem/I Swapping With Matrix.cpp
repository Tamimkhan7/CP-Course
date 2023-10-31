#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    int a[n+1][n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=1; i<=n; i++)
    {
        swap(a[x][i], a[y][i]);
    }
    for(int i=1; i<=n; i++)
    {
        swap(a[i][x], a[i][y]);
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    solve();
}
