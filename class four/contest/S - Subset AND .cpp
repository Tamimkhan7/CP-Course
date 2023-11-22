#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+9;
int a[N], pre[N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)cin>>a[i];
        int ans = a[0];
        for(int i=1;  i<n; i++)
        {
            ans&=a[i];
            if(ans<k)
            {
                cout<<"YES"<<'\n';
                return 0;
            }
        }
        if(ans<k)
        {
            cout<<"YES"<<'\n';
            return 0;
        }
        else cout<<"NO"<<'\n';
    }
}
