#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==1)
    {
        return n;
    }
int res = solve(n-1);
return res;
}
int main()
{
    int n;
    cin>>n;

    for(int i=0; i<solve(n); i++)cout<<1 <<endl;
    cout<<endl;
}
