#include <bits/stdc++.h>
using namespace std;

int main ()
{
    set<int> s;
    for(int i=1; i<10; i++)s.insert(i*10);
    auto it = s.begin();
    it++;
    s.erase(it);
    s.erase(30);
    auto x =  s.find(60);
    cout<<*x<<'\n';//jodi thake value ta tahole amake value print kore dibe ar na thakle randomly ulta palta garbage value diye dibe
    s.erase(x, s.end());
    for(auto xp : s)cout<<xp<<' ';
    cout<<'\n';

}
