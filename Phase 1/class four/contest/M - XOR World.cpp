#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
ll a,b;cin>>a>>b;
ll ans=0;
for(ll i=a; i<=b; i++){
    ans|=i;
}
cout<<ans<<endl;
}
