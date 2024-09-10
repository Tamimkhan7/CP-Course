#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

// const int N = 1e7 + 9;
// bool f[N];
// vector<int> prime;
// void sieve()
// {
//     MTK;

//     f[1] = true;
//     for (int i = 2; i * i < N; i++)
//     {
//         if (!f[i])
//         {
//             prime.push_back(i);
//             for (int j = i * i; j < N; j += i)
//                 f[j] = true;
//         }
//     }
//     for (int i = 2; i < N; i++)
//     {
//         if (!f[i])
//             prime.push_back(i);
//     }
// }
int32_t main()
{
    MTK;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cout << (3 * n) + i << ' ';
    cout << '\n';
    return 0;
}