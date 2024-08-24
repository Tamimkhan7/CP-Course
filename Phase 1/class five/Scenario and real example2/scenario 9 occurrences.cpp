#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long int ll;
// jodi ai problem ta solve n a solve korte cai tahole kemon hobe,, like amra jani map basically nlogn time complexity niye cole
// amra jani unordered_map n time complexity niye kaj kore sei khette aita use korte pari
// but taoh aktu problem ace, seita holo amra jani unordered_map use korte hash map use kora lane noyto aita worst case a jame kore tokhn n^2 time complexity hoye jay
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void print(unordered_map<int, int, custom_hash> mp)
{
    for (auto [x, y] : mp)
        cout << x << ' ' << y << '\n';
    cout << '\n';
}
int main()
{
    faster;
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    unordered_map<int, int, custom_hash> ct;
    for (int i = 1; i <= n; i++)
    {
        ct[a[i]]++; // nije nije update hoye jacce map ar modde, akta key rakhtce ar akta value mane koy bar ace ta increment hocce
        print(ct);
    }
    ll ans = 0;
    for (auto [x, y] : ct)
    {
        ans += 1LL * x * y;
    }

    /*
    for (int i = 1; i <= n; i++)
    {0
        int res = 1LL * i * ct[i];

        ans += res;
    }
    */
    cout << ans << '\n';
}