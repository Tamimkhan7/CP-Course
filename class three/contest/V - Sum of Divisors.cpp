#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define mod 1000000007
const int N = 1e7+7;
int a[N];
void solve()
{
    for(int i=1;i<N;i++){
        for(int j=i; j<N; j+=i){
            a[j]++;
        }

    }
    int n;
    cin>>n;

    ll ans=0;
    for(ll j=1; j<=n; j++)
    {
     ans += 1LL * j*a[j];
    }
    cout<<ans<<endl;
}

int main()
{
    solve();
}
