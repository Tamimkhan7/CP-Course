#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n%10==0)
    {
        cout<<n<<endl;
        return;
    }
    int res,ans=0;
    while(n>0)
    {
        if(n%10)
        {
            ans++;
            res = n%10;
            n/=10;
            if(ans>1)
            {
                cout<<res;
                for(int i=0; i<ans-1; i++)cout<<0;
            }
            cout<<" ";
        }
        else
        {
            cout<<n<<endl;
            return;
        }
    }
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
