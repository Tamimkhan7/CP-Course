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
    int m = a+c;
    if((2*b>c && (2*b-c)%a==0)|| (2*b>a && (2*b-a)%c==0)|| (m/2)%b==0 && m%2==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();
}
