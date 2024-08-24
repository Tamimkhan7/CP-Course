#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int mx= -1e5;
    int res;
    for(int i=2; i<=1000; i++)
    {
        int ans=0;
        for(int j=0; j<n; j++)
        {
            if(a[j]%i==0 )
            {
                ans++;
            }
        }
        if(ans>mx)
        {
            res = i;
            mx = ans;
        }
    }
    cout<<res<<'\n';
}
