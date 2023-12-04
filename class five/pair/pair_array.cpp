#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int>p[10];
    p[0]= make_pair(2,3);
    p[1]= make_pair(5,8);
    p[2]= make_pair(1,7);
    for(int i=0; i<3; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<'\n';
    }
}
