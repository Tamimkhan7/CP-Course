#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int a[n] = {1,2,3,3};
    int ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            ans ^= a[i]^a[j];
        }
    }
    cout<<ans<<'\n';
}

