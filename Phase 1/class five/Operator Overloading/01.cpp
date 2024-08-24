#include <bits/stdc++.h>
using namespace std;
pair<int, int> operator+(pair<int, int> &a, pair<int, int> &b) // pair operator overloading
{
    return make_pair(a.first + b.first, a.second + b.second);
}
pair<int, int> operator-(pair<int, int> &a, pair<int, int> &b) // pair operator overloading
{
    return make_pair(max(a.first, b.first) - min(a.first, b.first), max(a.second, b.second) - min(a.second, b.second));
}
int32_t main()
{
    pair<int, int> a = make_pair(2, 6), b = make_pair(6, 9);
    pair<int, int> ans = a + b;
    pair<int, int> ans1 = a - b;
    cout << ans.first << ' ' << ans.second << '\n';
    cout << ans1.first << ' ' << ans1.second << '\n';
}