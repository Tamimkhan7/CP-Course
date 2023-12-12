#include <bits/stdc++.h>
using namespace std;

int main ()
{
    set<int> s;
    for(int i=1; i<10; i++)s.insert(i*10);

    auto it = s.begin();
    it++;//but it +=3 ai rokom kora jabe na
    it = next(it, 3);//but next function diye je kono element access kora jabe
    cout<<*it<<' ';

  //  auto x =  s.find(60);
   // cout<<*x<<'\n';//jodi thake value ta tahole amake value print kore dibe ar na thakle randomly ulta palta garbage value diye dibe
   // s.erase(x, s.end());
   // for(auto xp : s)cout<<xp<<' ';
    //out<<'\n';
if(s.find(60) !=s.end())cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';
}
