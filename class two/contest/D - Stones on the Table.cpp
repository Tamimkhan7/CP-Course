#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for example: RRG
    int n;
    cin >> n;      // size of the string
    char s[n + 1]; // 1 besi neoyar karon holo akta null char thake always tai besi neoya
    cin >> s;
    int start_of_block = 0;
    int ans = 0;
    while (start_of_block < n)
    {
        int i = start_of_block;
        int end_of_block = i;
        while (i < n)
        {
            cout << s[i] << endl;
            if (s[i] == s[start_of_block])
            {
                end_of_block = i;
                i++;
            }
            else
            {
                break;
            }
        }
        int stones_in_this_block = end_of_block - start_of_block + 1;
        ans += stones_in_this_block - 1;
        start_of_block = end_of_block + 1;
    }
    cout << ans << endl;
}
//  /********
//     int n;
// cin >> n;
// char s[n + 1]; // char string use koreci, but string o use kora jeto
// cin >> s;
// int count = 0, total_count = 0;
// for (int i = 0; i < n - 1; i++)
// {
//     if (s[i] == s[i + 1])
//         count++;
//     else
//     {
//         total_count += count;
//         count = 0;
//     }
// }
// total_count += count;
// cout << total_count << endl;
// /***