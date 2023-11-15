#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+7;
int sb[N];
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    sb[0]=0;//first index insert the value 0
    for(int i=1; i<=n; i++)
    {
        sb[i]= a[i]^sb[i-1];//use prefix sum
    }
  // for(int i=1; i<=n;i++)cout<<sb[i]<<" ";
  // cout<<endl;
  int l,r;
}
