#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
const ll mod = 1000000003;
ll solve(ll n){

}

int main()
{
    faster;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n);
       /* ll ans, sum=0;

        for(int i=1; i<=n; i++)
        {
            ans = (1LL*((i*(i+1))/2)*((i*(i+1))/2))%mod;
            sum = (sum +ans)%mod;
        }
        */
        cout<<sum<<'\n';
    }

}


