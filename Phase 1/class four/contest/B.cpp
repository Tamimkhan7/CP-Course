#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;
int a[N];
int px[N];
#define ll long long
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)cin>>a[i];
    ll sum =0;
    for(int i=0; i<n; i++)
    {
        px[i] = a[i]+(i>0 ? px[i-1]:0);//use prefix sum
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        ll res = px[r]-(l>0?px[l-1]:0);
        cout<<res<<endl;
    }
}
