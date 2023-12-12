#include<bits/stdc++.h>
using namespace std;

int main()
{
    //basically ai vabe rakhle ase max priority
   priority_queue<int>p;
    p.push(2);
    p.push(12);
    p.push(8);
    p.push(5);
//don't use any iterator of priority_queue
    /*for(auto x :p)
    {
        cout<<p<<'\n';
    }*/
//priority queue basically jokhon value gula insert kora hoy tokhn value gula sorted akare hoye jay
    /*while(!p.empty())
    {
        cout<<p.top()<<' ';
        p.pop();
    }*/
   // p.clear();

    //ami akhn cai min priority in the program
    priority_queue<int, vector<int>, greater<int>>q;
    q.push(2);
    q.push(12);
    q.push(8);
    q.push(5);

    while(!q.empty())
    {
        cout<<q.top()<<' ';
        q.pop();
    }
}
