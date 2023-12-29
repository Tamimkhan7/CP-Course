#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    int a,b,c,t;
    t=1e5;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)break;
        if((b-a)==(c-b))
        {
            cout<<"AP "<<c+(b-a)<<endl;
        }
        else if((b/a)==(c/b))
        {
            cout<<"GP "<<c*(b/a)<<endl;
        }
    }
}
