#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();
    cout << (*it) << '\n'; // Output: 1
    v.push_back(6); // all previous iterators are invalidated, we can no longer use them
    cout << (*it) << '\n'; // Output: -822411264 (undefined behavior, so it can be anything)

    //so sei jonno abar iteraor begin or end function diye  value identify korte hobe
    it = v.begin();
    cout<<*it<<'\n';
}
