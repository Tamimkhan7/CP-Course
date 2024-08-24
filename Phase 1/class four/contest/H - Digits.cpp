#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n,k;
    cin>>n>>k;
    int res;
    if(k==2)
    {
        res = log2(n)+1;
    }
    else if(k==10)
    {
        res = (log10(n))+1;
    }
    else
    {
        res = (log10(n)/log10(k))+1;
    }
    cout<<res<<'\n';

}
