#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n, int x)
{
    while(x--)
    {
        int last_element = a[n];
        for(int i=n-1; i>0; i--)
        {
            a[i+1] = a[i];
        }
        a[1]= last_element;//insert last element into first element
    }
    for(int i=1; i<=n; i++)cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    solve(a, n,x);
}
