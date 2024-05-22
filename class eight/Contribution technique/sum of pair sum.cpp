#include<bits/stdc++.h>
using namespace std;
#define MTK ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mem(a, b) memset(a, b ,sizeof(a))
#define trace(x) cout<<#x<<' '<< x <<endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N =  1e6+9;
int a[N];
int32_t main() {
    MTK;
int n;cin>>n;
for(int i=1; i<=n;i++)cin>>a[i];
ll ans =0;
//basically brute forces apply for find the result
// for(int i=1;i<=n;i++){
//     for(int j=1; j<=n;j++){
//         ans += a[i]+a[j];
//     }
// }
//optimization answer
for(int i=1; i<=n;i++){
    ans += 2*n*a[i];
}
cout<<ans<<'\n';
    return 0;
}