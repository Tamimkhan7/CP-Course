#include <bits/stdc++.h>
using namespace std;
bool binary_represent(int n)
{
    string s,ss;
    int x;
    while(n>0)
    {
        x= n%2;
        s+=to_string(x);
        n/=2;
    }
    ss=s;
    reverse(s.begin(), s.end());
    if(ss==s)return true;
    else return false;
}
void solve(int n)
{

    if(n%2)
    {
        if(binary_represent(n))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main()
{
    int n;
    cin>>n;
    solve(n);
}
