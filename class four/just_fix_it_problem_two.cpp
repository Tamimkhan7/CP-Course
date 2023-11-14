#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    int suffix_sum[n+2];
    suffix_sum[n+1]=0;
    for(int i=n; i>=1; i--)
    {
        suffix_sum[i] = suffix_sum[i+1]+a[i];//using suffix sum formula using
    }
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        a[i]*=suffix_sum[i+1];
        sum +=a[i];
    }
    cout<<sum<<endl;
}
//solve the problem  usign O(n) time complixity
