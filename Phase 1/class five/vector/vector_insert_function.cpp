#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,8,9,6,3};

   v.insert(v.begin(), 11);//aita dile vector ar first a 11 insert korbe and baki all value gula 1 ghor right a cole jabe
   v.insert(v.begin()+3, 55);//first holo kon position a value insert korbe second holo koto value insert korbo


    for(auto x : v)cout<<x<<' ';
}
