#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define mod 1000000007
const int N = 1e7+7;
int a[N];
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans = b*b-4*a*c;
    int res1 = (-b+(sqrt(ans)))/(2*a);
    int res2 = (-b-(sqrt(ans)))/(2*a);
    //  cout<<ans<<endl;
    if(ans<0)
    {
        cout<<"No roots"<<endl;
    }
    else if(ans==0)
    {
        int res1 = (-b+(sqrt(ans)))/(2*a);
        cout<<"One root: "<<res1<<endl;
    }
    else
    {
        cout<<"Two roots: "<<min(res1, res2)<<" "<<max(res1, res2)<<endl;
    }
}

int main()
{
    solve();
}
