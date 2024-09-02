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

const int N = 1e6 + 9;
bool is_prime[N];

void prime_sieve()
{
    is_prime[1] = false;
    for (int i = 2; i < N; i++)
        is_prime[i] = true;

    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i + i; j < N; j += i)
                is_prime[j] = false;
        }
    }
}

bool suffix_sum_is_prime(int n)
{
    string s = to_string(n);
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        string suffix_dig = s.substr(i); // i theke last projnto all digit count korbe
        int val = stoi(suffix_dig);
        if (!is_prime[val])
            return false;
    }
    return true;
}

bool has_digit_zero(int n)
{
    while (n > 0)
    {
        if (n % 10 == 0)
            return false;
        n /= 10;
    }
    return true;
}

bool is_valid(int n)
{
    if (!is_prime[n])
        return false;
    if (!has_digit_zero(n))
        return false;
    if (!suffix_sum_is_prime(n))
        return false;
    return true;
}

bool valid[N];
int cnt_suffix_ans[N];

int32_t main()
{
    MTK;
    prime_sieve();
    for (int i = 1; i < N; i++)
    {
        valid[i] = is_valid(i);
        // cout << valid[i] << ' ' << is_valid[i] << '\n';
        cnt_suffix_ans[i] = cnt_suffix_ans[i - 1] + valid[i];
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << cnt_suffix_ans[n] << '\n';
    }
    return 0;
}
