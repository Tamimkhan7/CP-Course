#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void sequence(ll n, int ans)
{
    if(n==1)
    {
        ans++;
        cout<<ans<<endl;
        return;
    }
    else if (n%2)
    {
        n = (3*n+1);
        ans++;
    }
    else if(n%2==0)
    {
        n/=2;
        ans++;
    }
    sequence(n, ans);
}
int main()
{
    ll n;
    cin>>n;
    int ans=0;
    sequence(n, ans);

}
