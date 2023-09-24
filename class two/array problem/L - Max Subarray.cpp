#include <bits/stdc++.h>
using namespace std;
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

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                int sum = 0;
                vector<int> v;
                for (int k = i; k <= j; k++)
                {
                    v.push_back(a[k]);
                }
                sort(v.begin(), v.end(), greater<int>());
                cout << v[0] << " ";
            }
        }
        cout << endl;
    }
}