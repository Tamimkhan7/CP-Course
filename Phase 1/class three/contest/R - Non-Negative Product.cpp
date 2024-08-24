#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int negative_count=0, zero_count=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]<0)negative_count++;
        if(a[i]==0)
        {
            zero_count++;
            break;
        }
    }
    if(zero_count)
    {
        cout<<0<<endl;
        return;
    }
    else
    {
        if(negative_count%2==0)cout<<0<<endl;
        else cout<<1<<endl;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
