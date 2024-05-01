#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<array<int, 5>> vec;
    for (int i = 0; i < n; i++)
    {
        int x, y, z, u, w;
        cin >> x >> y >> z >> u >> w;
        vec.push_back({z, y, u, x, w});
    }

    // Printing elements of the vector before sorting
    for (const auto &x : vec)
    {
        for (int element : x)
        {
            cout << element << ' ';
        }
        cout << '\n';
    }

    sort(vec.begin(), vec.end()); // Sort the vector based on array comparison

    cout << "After sorting:\n";
    for (const auto &x : vec)
    {
        cout << x[3] << ' ' << x[1] << ' ' << x[2] << ' ' << x[0] << ' ' << x[4] << '\n';
    }
    return 0;
}
