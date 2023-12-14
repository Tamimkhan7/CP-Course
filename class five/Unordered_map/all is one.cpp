#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<int, int> mp;
    mp[3] = 2;
    mp[5] = 2;
    mp[2] = 1;
    mp[23] = 1;
    mp[1] = 2;
    for (auto x: mp)
    {
        cout << x.first << ' ' << x.second << '\n';
    } // the order of the keys may vary and may not be sorted


    // input:
    // 7
    // 5 3 2 2 4 5 5
    // find the maximum frequency of any element
    // Solve it in O(n) time complexity
    cout<<"Print maximum frequency of element : ";
    unordered_map<int, int> cnt;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int ans = 0,x=-1,element_print;
    for (auto [element, count]: cnt)
    {
        ans = max(ans, count);
        if(ans>x)
        {
            x = ans;
            element_print= element;
        }
    }
    cout << element_print<<' '<< x<< '\n';
    // Note that, if you use a map instead of an unordered map, the time complexity will be O(n log n)
    // Also, using an array is also not possible if the elements can be very large (like 10^9) as the array size will be very large
    return 0;
}
