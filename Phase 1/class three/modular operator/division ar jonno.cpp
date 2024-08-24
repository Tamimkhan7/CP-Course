#include <bits/stdc++.h>
using namespace std;
#define mod 17
int main()
{
    long long a,b;
    cin>>a>>b;
    //two tai kintu same two tar result oh same
    //jodi result negative a cole ase tahole holo amarke akbar mod sum kore abar mod kore dile answer positive a cole asbe

    cout<<((a-b)%mod+mod)%mod<<'\n';
    cout<<((a%mod-b%mod)+mod)%mod<<'\n';
}
