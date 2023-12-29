#include <bits/stdc++.h>
using namespace std;
void sum(int a[], int n, long long int summ, int m)
{
    if(n==1)
    {
        summ += a[n];
        double ave = (double)summ/m;
        printf("%.6lf",ave);
        return;
    }
    summ += a[n];
    sum(a, n-1, summ,m);
//    cout<<maxi<<endl;

}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)cin>>a[i];
    long long int summ=0;
    int m = n;
    sum(a, n,summ,m);
}

