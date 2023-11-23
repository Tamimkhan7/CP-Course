#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e5+5;
int px[N];

void solve()
{
    int n,k;cin>>n>>k;
    int a[k];
    for(int i=0; i<k; i++)cin>>a[i];
    px[0]=a[0];
    for(int i=0; i<k;i++){
       px[i]=a[i]+px[i-1];
    }

     for(int i=0; i<k;i++){
      cout<<px[i]<<" ";
    }
    cout<<'\n';

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

