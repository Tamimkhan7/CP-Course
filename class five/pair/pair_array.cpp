#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p[4];
    p[0] = make_pair(2, 3);
    p[1] = make_pair(5, 8);
    p[2] = make_pair(1, 7);
    cout << p[1].first << ' ' << p[1].second << '\n';
    for (int i = 0; i < 3; i++)
    {
        auto [x, y] = p[i];
        cout << x << ' ' << y << '\n';
    }

    for (auto [x, y] : p)
        cout << x << ' ' << y << '\n';
}
