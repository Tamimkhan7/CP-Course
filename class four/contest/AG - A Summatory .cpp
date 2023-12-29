#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
const int N = 1e6+9,  mod=1e9+3;
int pre[N];
int f(int n)
{
    int ans = (1LL*n*(n+1)/2)%mod;
    return (1LL*ans*ans)%mod;
}

int main()
{
    faster;
    for(int i=1; i<=N; i++)
    {
        pre[i] = (pre[i-1]+f(i))%mod;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<pre[n]<<'\n';
    }

}


