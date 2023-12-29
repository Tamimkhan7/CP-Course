#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long int maximum_value = 0;
        for (int i = 0; i < n - 1; i++)
        {
            maximum_value = max(maximum_value, (long long)a[i] * a[i + 1]); // max or min value we define must be both  data type are same, but we did not both data type are same then given me an garbage answer
        }
        cout << maximum_value << endl;
    }
}
// ans correct but this code showed TLE because this code time complexity O(n^3), that's why we did not try this approach
// for (int i = 0; i < n; i++)
// {
//     for (int j = i; j < n; j++)
//     {
//         vector<long long int> v;
//         for (int k = i; k <= j; k++)
//         {
//             int x = a[k];
//             v.push_back(x);
//         }
//         sort(v.begin(), v.end());
//         if (v.size() > 1)
//         {
//             maxi = (v[0] * v[v.size() - 1]);
//             maximum_value = max(maximum_value, maxi);
//         }
//         else if (v.size() < 1)
//         {
//             maximum_value = v[0];
//         }
//     }
// }