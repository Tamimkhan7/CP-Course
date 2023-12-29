#include <bits/stdc++.h>
using namespace std;
void sum(vector<int>&a, vector<int>&b ,int n, int m)
{

        int summ=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {

        cout<<a[i][j];
        }
        cout<<endl;
    }


}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a[n+1][m+1];
    vector<int>b[n+1][m+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>b[i][j];
        }
    }
    long long int summ=0;
    sum(a,b,n,m);
}

