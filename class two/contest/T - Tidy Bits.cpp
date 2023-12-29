#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    // for (int i = 0; i < 32; i++)
    // {
    //     if ((n >> i) & 1)
    //         ans++;
    // }
    // vector<int> v;
    // for (int i = 1; i <= n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < 32; j++)
    //     {
    //         if ((i >> j) & 1)
    //             count++;
    //     }
    //     if (count == ans)
    //         v.push_back(i);
    // }
    // sort(v.begin(), v.end());

    // try another way

    int x = __builtin_popcount(n); // that means n ar modde koyta 1s bit ace oita count kortece
    cout << x << endl;

    // for (int i = 1; i <= n; i++)
    // {
    //     if (__builtin_popcount(i) == x) // dekhteci je x ar soman aro koyta value ace, je x ar joto gula 1s ace sei value i te toto gula 1s thakte hobe,  ar theke minimum value ta print korteci
    //     {
    //         cout << i << endl;
    //         return 0;
    //     }
    // }
    // again another way try//n=37 that the way x = 3
    cout << (1 << x) - 1 << endl;
}