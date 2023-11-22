#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int a,b,n;
int solve(int n)
{
    if(n==0)return a;
    else if(n==1)return b;
    return solve(n-1)^solve(n-2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        cout<< solve(n)<<endl;
    }
}

