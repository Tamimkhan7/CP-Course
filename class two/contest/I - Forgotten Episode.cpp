#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n - 1; i++)
    //     cin >> v[i];

    // sort(v.begin(), v.end());
    // for (int i = 0; i < n - 1; i++)
    // {
    //     int res = v[i + 1] - v[i];
    //     if (res > 1)
    //     {
    //         cout << v[i] + 1 << endl;
    //         return 0;
    //     }
    // }
    // cout << n << endl;
    // this is another way to solve the problem
    //// int n;
    // cin >> n;
    // int a[n];
    // for (int i = 1; i < n; i++)
    //     cin >> a[i];

    // for (int i = 1; i <= n; i++)
    // {
    //     bool ok = false;
    //     for (int j = 1; j < n; j++)
    //     {
    //         if (a[j] == i)
    //         {
    //             ok = true;
    //         }
    //     }
    //     if (!ok)
    //         cout << i << endl;
    // }//
    // this program time complexity = O(n^2)
    // space complexity = O(n);
    // that's why we find this program TLE, didn't accepted the program

    // try better solution
    int n;
    cin >> n;
    int a[n + 1]; // jodi 1 indexing kori tahole array kintu arkta gor besi nite hobe
    for (int i = 1; i < n; i++)
        cin >> a[i];

    bool does_exit[n + 1];
    for (int i = 1; i <= n; i++)
    {
        does_exit[i] = false; // array sokol value false kore rekhe dicci
        // like value ta amn ace = 0 0 0 0 0 0 0 equal to n projnto
    }
    // memset(does_exit, 0, n); // memset use kore oh kora jay, karon amra does_exit ar sokol value false kore rekhe dici
    for (int i = 1; i < n; i++)
    {
        does_exit[a[i]] = true; // aita means holo dori a[i]=3, tahole does_exit ar 3 number index ta ami true kore dicci
    }
    for (int i = 1; i <= n; i++)
    {
        if (!does_exit[i]) // jeita exit korbe ba jeita false ace oitai print kore dibe
        {
            cout << i << endl; // just i ar value ta print kore diccii
        }
    }
}
// 3 ta type solution ace, but 3 tai solution ai exit kore