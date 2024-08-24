#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007
void solve()
{
    int k,cnt=0;
    ll x;
    cin>>k>>x;
    vector<ll>v;
    ll sum=0;
    for(int i=1; i<=k; i++)
    {
        v.push_back(i);
        sum +=i;
        cnt++;
        if(sum>=x)
        {
            cout<<cnt<<'\n';
            return;
        }
    }
    for(int i=k-1; i>=1; i--)
    {
        sum +=i;
        cnt++;
        if(sum>=x)
        {
            cout<<cnt<<'\n';
            return;
        }
    }
}
int main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
        solve();
}
