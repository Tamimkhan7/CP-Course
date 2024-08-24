#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
const ll mod = 1e9+7;

int main()
{
    faster;
   int n;cin>>n;
   int a[n];
   ll total =0;
   for(int i=0; i<n; i++){
    cin>>a[i];
    total+=a[i];
   }
   cout<<(double)total/n<<endl;

}


