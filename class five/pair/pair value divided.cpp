#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int>p;
    //p = make_pair(2,3);
    p = {2,3};//pair value ai vabe oh initilization kora jay
    auto [x,y] = p;
    //  auto x = p.first, y= p.second;//ai vabe oh value divided kora jay
    cout<<x<<' '<<y<<'\n';
}
