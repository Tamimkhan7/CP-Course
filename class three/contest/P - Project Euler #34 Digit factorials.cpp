#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    string s,ss;
    cin>>s;
    int len = s.size();
    int i=0;
    ll sum =0;
    while(len>i)
    {
        ss = s[i];
        ll ans = stoi(ss);
        ll fact =1;
        for(int i=1; i<=ans; i++)
        {
            fact= (fact*i)%mod;
        }
        cout<<fact<<endl;
        sum +=fact;
        i++;
    }
    cout<<sum<<endl;
}
