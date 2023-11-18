#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int k;
    cin>>k;
    int ans=0;
    for(int i=1; i<=k; i++)
    {
        for(int j=1; j<=k; j++)
        {
            for(int x=1; x<=k; x++)
            {
                int gcd = __gcd(i, __gcd(j,x));
                ans +=gcd;
            }
        }
    }
    cout<<ans<<'\n';
}
