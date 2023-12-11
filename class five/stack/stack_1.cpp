#include<bits/stdc++.h>
using namespace std;
//stack basically holo LIFO--list in first out
int32_t main()
{
    stack<int>st;
    st.push(20);
    st.push(5);
    st.push(12);
//    for(auto x:st)cout<<x<<'\n';//no iterator at stack, that's why this is not work in this scope
    cout<<st.top()<<'\n';
    while(!st.empty())
    {
        cout<<st.top()<<' ';
        st.pop();//deleted at first element of the strack
    }
    cout<<'\n';
    cout<<st.size()<<'\n';
}
