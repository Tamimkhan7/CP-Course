#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,mod;
    cin>>a>>b>>mod;
    cout<<((1LL*a%mod-(3*b)%mod)+mod)%mod<<endl;//negative value out korar jonno one time mod ke add kore ar por abar mod dara modular kore nici
}
