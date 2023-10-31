#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    int maxi = -1e8,mini = 1e8;
    for(int i=0; i<n; i++)
    {
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }
    cout<<mini<<" "<<maxi<<endl;
}
int main()
{
    solve();
}
