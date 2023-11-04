#include <bits/stdc++.h>
using namespace std;
int middle(int a,int b,int c)
{
    int maxi = max(a,max(b,c));
    int mini = min(a,min(b,c));
    if(a==maxi && b==mini)return c;
    else if(a=maxi && c==mini)return b;
    else if(b=maxi && c==mini)return a;
}
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int res = abs(a-b);
    int res2 = abs(b-c);
    int x=0;
    if(res==res2 && a>b ||res==res2 && b<c)
    {
        cout<<"YES"<<endl;
        return;
    }
    else

    {

        int mid = middle(a,b,c);
        int maxi = max(a,max(b,c));
        int mini = min(a,min(b,c));
        int ans = maxi-mid;
        if(ans%mini==0)x++;
    }
    if(x)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
