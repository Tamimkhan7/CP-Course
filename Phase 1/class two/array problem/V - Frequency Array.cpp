#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // sort(a, a + n);
    // for (int i = 1; i <= m; i++)
    // {
    //     int count = 0;
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (a[j] == i)
    //             count++;
    //     }
    //     cout << count << endl;
    // }
    // 10^5*10^5=10^10/10^8= 100s//tle equation
    // this code give me tle because this program given me time at most 1s, but my program taking time at most 100s that's why this program will be show tle
    int fre[m + 1];
    for (int i = 1; i <= m; i++)
    {
        fre[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        fre[a[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cout << fre[i] << endl;
    }
}