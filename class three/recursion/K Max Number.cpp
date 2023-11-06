#include <bits/stdc++.h>
using namespace std;
void max_num(int a[], int n, int maxi)
{
    if(n==1)
    {
        if(maxi<a[n])
        maxi = a[n];
       cout<<maxi<<endl;
       return;
    }
    if(maxi < a[n])
    {
        maxi = a[n];
    }
    max_num(a, n-1, maxi);
//    cout<<maxi<<endl;

}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    int maxi = a[1];
    max_num(a, n, maxi);
}

