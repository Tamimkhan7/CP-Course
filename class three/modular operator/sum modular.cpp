#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<(a *b)%mod<<endl;//aita multiplication ar jonno mod
    cout<< ((a %mod)*(b%mod))%mod<<endl;//aita multiplication ar jonno mod
    cout<< (a+b)%mod<<endl;//aita sum ar jonno mod
    cout<< ((a %mod)+(b%mod))%mod<<endl;//aita sum ar jonno mod

}
