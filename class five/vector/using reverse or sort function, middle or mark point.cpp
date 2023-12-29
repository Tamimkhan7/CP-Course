#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{1,2,8,9,6,3};
    sort(v.begin()+2, v.end());//begin always inclusive ar end holo exclusive
    //begin dile first value oh ney, ar end dile last value ney na last ar ager value ta ney
    reverse(v.begin()+2, v.begin()+5);//begin always inclusive ar end holo exclusive
    for(auto x : v)cout<<x<<' ';
}
