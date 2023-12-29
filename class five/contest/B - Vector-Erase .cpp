#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    int x;
    cin>>x;
    x--;
    v.erase(v.begin()+x);

    int a,b;
    cin>>a>>b;
    int ans = b-a;
    ans++;
    a--,b--;

    v.erase(v.begin()+a, v.begin()+b);

    cout<<n-ans<<'\n';
    for(int i=0; i<n-ans; i++)cout<<v[i]<<" ";
    cout<<'\n';


}
