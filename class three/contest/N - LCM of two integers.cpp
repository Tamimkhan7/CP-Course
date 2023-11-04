#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,b;
    cin>>a>>b;
    ll gcd = __gcd(a,b);
    ll lcm = (a*b)/gcd;
    cout<<lcm<<endl;
}
