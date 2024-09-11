#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long

int ok(int n)
{
    int cnt = 0;
    // Trailing 0s in n ! = Count of 5s in prime factors of n ! = floor(n / 5) + floor(n / 25) + floor(n / 125) + …
    for (int i = 5; n / i >= 1; i *= 5)
        cnt += n / i;
    return cnt;
}

int main()
{
    MTK;
    int m;
    cin >> m;
    vector<int> ans;
    int l = 0, r = 5 * (m + 1);
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int zeros = ok(mid);

        if (zeros == m)
        {
            ans.push_back(mid);
            int temp = mid;
            while (ok(--temp) == m)
                ans.push_back(temp);

            temp = mid;
            while (ok(++temp) == m)
                ans.push_back(temp);
            break;
        }
        else if (zeros < m)
            l = mid + 1;
        else
            r = mid - 1;
    }
    sort(all(ans));

    cout << ans.size() << '\n';
    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';

    return 0;
}
