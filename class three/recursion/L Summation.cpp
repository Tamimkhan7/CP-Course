#include <bits/stdc++.h>
using namespace std;
long long int summ=0;
void sum(int a[], int n)
{
    if(n==1)
    {
        summ += a[n];
        cout<<summ<<endl;
        return;
    }
    summ += a[n];
    sum(a, n-1);
//    cout<<maxi<<endl;

}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    sum(a, n);
}

