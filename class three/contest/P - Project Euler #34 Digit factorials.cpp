#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    int n,x;
    cin>>n;
    string s,ss;
    ll ans=0;
    for(int i=10; i<=n; i++)
    {
        s = to_string(i);
        ll sum=0;
        for(int j=0; j<s.size(); j++)
        {
            ss = s[j];
            x = stoi(ss);
            int fact =1;

            //find factorial
            for(int k=1; k<=x; k++)
            {
                fact*=k;
            }
            sum +=fact;
        }
        //check their digit factorial sum divided by number
        if(sum%i==0)
        {
            ans +=i;
        }
    }
    cout<<ans<<endl;

}
