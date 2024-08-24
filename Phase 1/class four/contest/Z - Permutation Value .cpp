#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k = n/2;
        if(n%2==0)
        {
            for(int i=1, j=k+1; i<=k, j<=n; i++, j++)
            {
                cout<<j<<" "<<i<<" ";
            }
        }
        else
        {
            for(int i=1, j=k+2; i<=k, j<=n; i++, j++)
            {
                cout<<i<<" "<<j<<" ";
            }
            cout<<k+1;
        }
        cout<<'\n';
    }
}

