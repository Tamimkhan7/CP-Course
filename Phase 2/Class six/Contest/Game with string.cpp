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
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (!v.empty() and (s[i] == v.back()))
        {
            cnt++;
            v.pop_back();
        }
        else
            v.push_back(s[i]);
    }
    // while (!se.empty())
    // {
    //     cout << se.top() << ' ';
    //     se.pop();
    // }
    // cout << cnt << '\n';
    if (cnt & 1)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';

    return 0;
}
