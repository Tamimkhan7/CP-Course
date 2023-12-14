#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
struct Queue
{
    int a[N];
    int start =1, end =0;
    void push(int x)
    {
        a[end++]=x;
    }
    void pop()
    {
        if(start>end)
        {
            return;
        }
        else
        {
            start++;
        }
    }
    int front ()
    {
        if(start>end)
        {
            return 0;
        }
        return a[start];
    }
    int back()
    {

        if(start>end)
        {
            return 0;
        }
        return a[end];
    }
    int size()
    {
        return end-start+1;
    }
    bool empty()
    {
        return start>end;
    }
};
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<q.size();
    cout<<(q.empty()? "YES":"NO");

    cout<<q.front()<<'\n';
    q.pop();

    cout<<q.front()<<'\n';
    q.pop();

    cout<<q.back()<<'\n';
    q.pop();



}
