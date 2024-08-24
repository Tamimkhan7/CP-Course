#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long maximum_value = -1e18;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = max((long long)a[i], a[i] + sum);
        maximum_value = max(sum, maximum_value);
    }
    cout << maximum_value << endl;
}
// this is my code but this code showed TLE then we did not try this apporach
//  for (int i = 0; i < n; i++)
//  {
//      for (int j = i; j < n; j++)
//      {
//          long long int sum = 0;
//          for (int k = i; k <= j; k++)
//          {
//              sum += a[k];
//          }
//          maximum_value = max(sum, maximum_value);
//      }
//  }