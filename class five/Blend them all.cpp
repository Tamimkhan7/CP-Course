#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    vector<string> v = {"hello"  "world"};
    for (auto s: v)
    {
        cout << s << ' ';
    }
    cout << endl;

    reverse(v.begin(), v.end());//jehetu two ta string ak sathe tai reverse korle basically total string ta reverse hoye jabe,, kono character onujayi reverse hobe na
    for (auto s: v)
    {
        cout << s << ' ';
    }
    cout << endl;


    pair<int, vector<string>> p = {1, v};
    cout << p.second[0]<<' '<<p.first<<' '<<p.second[1] << '\n';
    return 0;

}
