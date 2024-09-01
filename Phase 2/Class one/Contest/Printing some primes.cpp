#include <bits/stdc++.h>
using namespace std;

#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll long long
#define mod 1000000007

const int N = 1e8;
bitset<N> is_prime;
int main()
{
    MTK;
    is_prime[1] = false;
    for (int i = 2; i < N; i++)
        is_prime[i] = true;
    for (int i = 2; i * i < N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i + i; j < N; j += i)
                is_prime[j] = false;
        }
    }
    vector<int> v;
    for (int i = 2; i < N; i++)
    {
        if (is_prime[i])
            v.push_back(i);
    }
    for (int i = 0; i < v.size(); i += 100)
        cout << v[i] << '\n';
}
