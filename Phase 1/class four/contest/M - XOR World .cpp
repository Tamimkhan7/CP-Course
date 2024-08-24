#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll zero_to_x_xor(ll x){
    ll ans =0;
    while(x>=0 and x%4 !=3){
        ans ^=x;
        x--;
    }
    return ans;
}
ll l_to_r_xor(ll l, ll r){
return zero_to_x_xor(r)^(l>0 ? zero_to_x_xor(l-1):0);
}

int main()
{
    ll l,r;
    cin>>l>>r;
    ll ans=0;
    ans = l_to_r_xor(l,r);
    cout<<ans<<'\n';
}
