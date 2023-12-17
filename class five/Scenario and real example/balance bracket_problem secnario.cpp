#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char>st;
    for(auto x : s)//for(int i=0; i<len; i++)//loop ta basically ai vabe continue korbe
    {
        if(x =='(')st.push(x);
        else
        {
            if(st.empty())
            {
                cout<<"NO"<<'\n';
                return 0;
            }
            else
            {
                st.pop();
            }
        }
    }
    if(st.empty())cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

}
