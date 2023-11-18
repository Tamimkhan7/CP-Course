#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    sort(s.begin(), s.end());
    int x,y;
    int flag =0,ap=0;
    for(int i=0; i<n; i++)
    {
        x = s[i]-'0';
        y = s[i+1]-'0';
        if((y-x)>1)
        {
            flag =1;
            string c,cc;
            c = s[i]+1;
            cout<<c<<'\n';
            return 0;
        }
    }
    if(n==1 && s[0]!='a')
    {
        cout<<"a"<<endl;
        return 0;
    }
    if(s[n-1]=='y')
    {
        cout<<"z"<<endl;
        return 0;
    }
    if(!flag)cout<<"None"<<'\n';

}
