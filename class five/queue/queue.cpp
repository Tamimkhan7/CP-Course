#include <bits/stdc++.h>
using namespace std;
//queue basically FIFO--first in first out
int main()
{
    queue<int> qt;
    qt.push(1);
    qt.push(2);
    qt.push(3);

    qt.pop();
    cout<<qt.front()<<'\n';//qt.front diye queue first value ta print kora jay
    cout<<qt.back()<<'\n';///queue te back oh kora jay
}
