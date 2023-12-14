#include <bits/stdc++.h>
using namespace std;

struct Stack
{
    vector<int>v;
    void push(int x)
    {
        v.push_back(x);
    }
    void pop()
    {
        if(!v.empty())v.pop_back();
    }
    int top()
    {
        if(v.empty())
        {
            return -1;
        }
        else
        {
            return v.back();
        }
    }

    int size()
    {
        return v.size();
    }
    int empty()
    {
        return v.empty();
    }
};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<st.top()<<'\n';
    st.pop();

    cout<<st.top()<<'\n';
    st.pop();

    cout<<st.top()<<'\n';
    st.pop();

    cout<<st.top()<<'\n';
    st.pop();
}
