#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,8,9,6,3};
//base of index always 0
    // v.erase(v.begin());//aita dile vector ar first a deleted hoye jabe baki value gula ak ghor left a cole asbe
    v.erase(v.begin(), v.begin()+3);//aita dile vector ar oi position ar value ta deleted hoye jabe baki value gula ak ghor left a cole asbe

    for(auto x : v)cout<<x<<' ';
}
