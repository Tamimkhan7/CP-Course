#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    long long int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact = (fact*i)%mod;
    }
    cout<<fact<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
