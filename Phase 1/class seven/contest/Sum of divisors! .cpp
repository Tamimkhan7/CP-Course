#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
const int N = 1e6 + 9;
int sum[N];

void sum_of_divisor()
{
    for (int i = 1; i < N; i++)
    {
        int x = 0;
        for (int j = 1; j < N; j += i)
        {
            sum[j] += i;
        }
    }
}

bool is_prime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    MTK;
    sum_of_divisor();
    // for (auto x : sum)
    //     cout << x << ' ';
    // cout << '\n';
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        for (int i = a; i <= b; i++)
        {
            if (is_prime(sum[i]))
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}
