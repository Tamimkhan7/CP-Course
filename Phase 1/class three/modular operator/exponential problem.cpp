#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  mod = 1e9+7;
    int a,b;
    cin>>a>>b;
    long long res =1;
    for(int i=1; i<=b;  i++)
    {
        res = (1LL*res*a)%mod;
    }
    cout<<res<<endl;
}
//all right everything

