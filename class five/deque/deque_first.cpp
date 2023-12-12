#include <bits\stdc++.h>
using namespace std;
int main()
{

    //deque basically vector ar moto, vector a ja ja function use kora jay deque ta ta function use kora jay,, besi oh kora jay
    //deque a push_front and pop_front oh kora jay aita vector ar nai aita advantage neoya jay

    deque<int>d;
    d.push_back(5);
    d.push_back(3);
    d.push_back(7);
    d.push_back(9);//last a value insert

    cout<<d.size();//size print
    cout<<'\n';
    d.push_front(4);//first a value insert
    d.push_front(12);
    d.pop_front();//first a value deleted
    for(auto x : d)cout<<x<<' ';//print the all deque element
    cout<<'\n';

    cout<<d.front()<<'\n';//front a value access
    cout<<d.back()<<'\n';//back a value access

    cout<<d[1]<<'\n';//vector ar moto je kono value access kora jay
}
