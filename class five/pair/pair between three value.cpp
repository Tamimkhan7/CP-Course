#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<pair<int, int>, int>p;
    p = make_pair(make_pair(2,3), 5);
    cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<'\n';
}
