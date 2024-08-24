#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    string s;
    cin >> s;
    int cnt = 0;
    sort(all(s));
    int n = s.size();
    vector<string> v;
    do
    {
        cnt++;
        v.push_back(s);
    } while (next_permutation(all(s)));
    cout << cnt << '\n';
    for (auto x : v)
        cout << x << '\n';
    return 0;
}