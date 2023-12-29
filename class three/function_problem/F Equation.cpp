#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll get_pow(int x, int n)
{
    ll power=1;
    for(int i=0; i<n; i++)
    {
        power*=x;//find the x power of nth power
    }
    return power;
}
ll solve(int x, int n)
{
    ll res=0;
    for(int i=0; i<=n; i+=2)
    {
        res += get_pow(x,i);
    }
    res -=1;//-1 for (x^0-1)
    return res;
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<< solve(x,n)<<endl;
}
