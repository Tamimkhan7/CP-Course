#include<bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sq(x) (x) * (x)
#define end "\n"
int main()
{
    faster;
    int n,k;
    cin>>n>>k;
    int ans=0;
    while(n--)
    {
        int a;
        cin>>a;
        if(a%k==0)ans++;
    }
    cout<<ans<<endl;
}
