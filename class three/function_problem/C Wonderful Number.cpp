#include <bits/stdc++.h>
using namespace std;
void binary_represent(int n)
{
    vector<int>v;
    int i=0;
    while(n>-1)
    {
        v[i] =(n%2);
        n/=2;
    }
    cout<<v.size();
}
void solve()
{
    int n;
    cin>>n;
    if(n%2!=0)binary_represent(n);
    else cout<<"NO"<<endl;
}
int main()
{
    solve();
}
