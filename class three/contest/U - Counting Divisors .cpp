#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)ans++;
        }
        cout<<ans<<endl;
    }
}
