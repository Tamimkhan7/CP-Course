#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((n >> i) & 1)
            ans++;
    }
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 0; j < 32; j++)
        {
            if ((i >> j) & 1)
                count++;
        }
        if (count == ans)
            v.push_back(i);
    }
    sort(v.begin(), v.end());
    cout << v[0] << endl;
}