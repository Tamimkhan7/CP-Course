#include <bits/stdc++.h>
using namespace std;
#define mod 17
int main()
{
    long long a,b;
    cin>>a>>b;
    //two tai kintu same two tar result oh same
    cout<<(a+b)%mod<<'\n';
    cout<<(a%mod+b%mod)%mod<<'\n';
}
