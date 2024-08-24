#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //unordered_set sorted thakbe na but but unique thakbe
    unordered_set<int> se;
    se.insert(2);
    se.insert(3);
    se.insert(2);
    se.insert(1);
    se.insert(2);
    for (auto x: se)
    {
        cout << x << ' ';
    }
    cout <<'\n'; // 1 3 2 (output order may vary, but they are unique and may not be sorted)
    se.erase(2);
    for (auto x: se)
    {
        cout << x << ' ';
    }
    cout <<'\n'; // 1 3
    return 0;
}
