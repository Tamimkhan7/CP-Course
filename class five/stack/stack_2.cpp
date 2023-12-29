#include<bits/stdc++.h>
using namespace std;
//stack basically holo LIFO--list in first out
int32_t main()
{
    stack<int>st,s;
    st.push(20);
    st.push(5);
    st.push(12);

    s.push(2);
    s.push(5);
    s.push(1);

    swap(s,st);
    while(!st.empty()){
        cout<<st.top()<<' ';
        st.pop();
    }
    cout<<'\n';


}
