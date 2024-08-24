#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(int n, int a[])
{
    if(n==n)
    {
        for(int i=0;i<n; i++){
            if(a[i]>a[i+1]){
                a[i+1]=a[i];
                a[i] = a[i];
            }
        }
        for(int i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
        return ;
    }
    solve(n-1, a);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    solve(n,a);
}
