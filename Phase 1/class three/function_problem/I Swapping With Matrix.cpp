#include <bits/stdc++.h>
using namespace std;
int n;
const int N=505;
int a[N][N];
void solve(int x,int y)
{

    for(int i=1; i<=n; i++)
    {
        swap(a[x][i], a[y][i]);
    }
    for(int i=1; i<=n; i++)
    {
        swap(a[i][x], a[i][y]);
    }

}
int main()
{
    int x,y;
    cin>>n>>x>>y;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }
    solve(x,y);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
