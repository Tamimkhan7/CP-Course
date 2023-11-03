#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    while(x--)
    {
        for(int i=0; i<a.size(); i++)
        {
            a[i+1]=a[i];
            a.erase(a.begin()+i);
        }
    }
    for(int i=0; i<n; i++)cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    solve();
}
