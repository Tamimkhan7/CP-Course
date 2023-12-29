#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int total_sum =0;
    for(int i=0; i<n; i++)
    {
        total_sum+=a[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        a[i]*=total_sum;
        sum +=a[i];
    }
    cout<<sum<<endl;
}
//solve the problem  usign O(n) time complixity
