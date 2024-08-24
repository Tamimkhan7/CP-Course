#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    tuple<int, double, char>t;
    t = {10, 2.3, 'x'};
    cout<<get<1>(t)<<' '<<get<0>(t)<<'\n';//ai vabe tuple ar je kono value print kora jay
    t = {150, 2.5, 'tamim'};
    auto [first_element, second_element, third_element] =t;
    cout<<get<0>(t)<<' '<<get<1>(t)<<' '<<get<2>(t)<<'\n';
}
