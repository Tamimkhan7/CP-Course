#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    int pw =1;
    while(n>0)
    {
        if(n%10)
        {
            int x =(n%10)*pw;
            v.push_back(x);
        }
        pw*=10;
        n/=10;

    }
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}

