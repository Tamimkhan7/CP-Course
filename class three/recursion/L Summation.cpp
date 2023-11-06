#include <bits/stdc++.h>
using namespace std;
void sum(int a[], int n, long long int summ)
{
    if(n==1)
    {
        summ += a[n];
        cout<<summ<<endl;
        return;
    }
    summ += a[n];
    sum(a, n-1, summ);
//    cout<<maxi<<endl;

}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
   long long int summ=0;
    sum(a, n,summ);
}

