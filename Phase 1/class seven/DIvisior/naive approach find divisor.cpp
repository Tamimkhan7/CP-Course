#include <bits/stdc++.h>
using namespace std;

vector<int> find_divisors_naive(int n)
{
    vector<int> divisors;
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
        }
    }
    return divisors;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ans = find_divisors_naive(n);
    for (auto x : ans)
        cout << x << ' ';
    cout << '\n';
}
