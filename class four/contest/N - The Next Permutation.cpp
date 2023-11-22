#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,s;
        cin>>a>>b;
        s=b;
        next_permutation(b.begin(), b.end());
        if(b>s)
            cout<< a<<" "<<b<<'\n';
        else cout<<a<<" "<<"BIGGEST"<<'\n';

    }
}
