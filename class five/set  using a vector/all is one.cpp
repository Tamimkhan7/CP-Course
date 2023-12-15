#include <bits/stdc++.h>
using namespace std;
struct Set
{
    vector<int>v;
    int find_index(int x)
    {
        auto it = find(v.begin(), v.end(), x);
        if(it == v.end())return -1;
        return it-v.begin();
    }
    void insert(int x)
    {
        if(find_index(x) != -1)return;
        v.push_back(x);
        sort(v.begin(), v.end());
    }
    void erase(int x)
    {
        if(find_index(x)== -1)return;
        v.erase(find(v.begin(), v.end(),x));
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    Set st;
    st.insert(10);
    st.insert(60);
    st.insert(20);
    st.insert(15);
    st.insert(10);
    cout<<st.size()<<'\n';
    cout<<(st.empty()?"YES" : "NO")<<'\n';
    st.erase(10);
    cout<<st.find_index(10)<<'\n';
    cout<<st.find_index(15)<<'\n';
    st.erase(15);
    cout<<st.find_index(60)<<'\n';
    st.erase(60);
    cout<<st.find_index(20)<<'\n';
    st.erase(20);
    cout<<(st.empty()?"YES" : "NO")<<'\n';

}
