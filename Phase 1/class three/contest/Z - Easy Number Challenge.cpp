#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1073741824;
const int N = 1e6+5;
int diviors[N];
void solve()
{
    for(int i=1; i<=N; i++)
    {
        for(int j=i; j<=N; j+=i)
        {
            diviors[j]++;
        }
    }
}
int main()
{
    solve();
    int a,b,c;
    cin>>a>>b>>c;
    ll sum =0;
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            for(int k=1; k<=c; k++)
            {
                int val = i*j*k;
                sum += diviors[val]%mod;
            }
        }
    }
    cout<<sum<<endl;
}
