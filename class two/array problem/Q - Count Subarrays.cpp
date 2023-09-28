#include <bits/stdc++.h>
using namespace std;
int count_subarrays(int n, int a[])
{
    int ans = 0, count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                v.push_back(a[k]);
            }
            int ct = 0;
            for (int i = 0; i < v.size() - 1; i++)
            {
                if (v[i] < v[i + 1])
                    ct++;
            }
            if (ct == v.size() - 1)
                count++;
            v.clear();
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << count_subarrays(n, a) << endl;
    }
}