#include <bits/stdc++.h>
using namespace std;
struct PriorityQueue
{
    vector<int>v;
    void push(int x)
    {
        v.push_back(x);
        sort(v.rbegin(), v.rend());
    }
    void pop()
    {
        if(v.empty())
        {
            cout<<"Can't pop!"<<'\n';
            return;
        }
        v.erase(v.begin());
    }
    int top()
    {
        if(v.empty())
        {
            cout<<"Can't find top element!"<<'\n';
            return 0;
        }
        return v[0];
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
    PriorityQueue q;
    q.push(10);
    q.push(40);
    q.push(15);
    cout<<q.size()<<'\n';
    cout<<q.top()<<'\n';
    q.pop();

    cout<<q.top()<<'\n';
    q.pop();

    cout<<q.top()<<'\n';
    //q.pop();

    cout<<(q.empty()? "YES" : "NO")<<'\n';
    cout<<q.top()<<'\n';
}
