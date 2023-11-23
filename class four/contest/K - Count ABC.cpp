#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int x;
    cin>>x;
    string s;
    cin>>s;
    int n = s.size();
    int ans=0;
    for(int i=0; i<n-2; i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C')ans++;
    }
    cout<<ans<<endl;

}
