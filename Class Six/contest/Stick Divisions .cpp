// used algrorithom Huffman Coding to the problem
// think to the alternative way like upside down //ulta kore cinta korle easyly solve kora jay
#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int x, n;
    cin >> x >> n;
    // The element with the lowest value has the hightest priority
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    ll ans = 0;
    while (pq.size() > 1)
    {
        int x = pq.top();
        pq.pop();
        int y = pq.top();
        pq.pop();
        ans += (x + y);
        pq.push(x + y);
    }
    cout << ans << ' ';

    return 0;
}