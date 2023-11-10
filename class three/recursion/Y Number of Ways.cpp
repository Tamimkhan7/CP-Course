#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(int n, int k)
{
    if(n==n)
    {
        vector<int>v;
        for(int i=n; i<=k; i++)
        {
            v.push_back(i);
        }
        int x = v.size();
        x-=2;
        int ans = (x*(x+1))/2;
        cout<<ans+1<<endl;
        return;
    }
    solve(n-1, k);
}
int main()
{
    int n,k;
    cin>>n>>k;
    solve(n,k);
}
