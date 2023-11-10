#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    double a[n];
    double sum =0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sum/=n;
    cout<<fixed<<setprecision(7);
    cout<<sum<<endl;
}
int main()
{
    solve();
}
