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
int spf[N];
int32_t main()
{
    MTK;
    for (int i = 1; i < N; i++)
        spf[i] = i; // sob gula i value spf a niye gelam
    // using sieve formula
    // sob gula jonno age smallest prime factorization ber kore rekhe dici
    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j += i)
            spf[j] = min(spf[j], i); // minimum value ta store kore rakhteci//like 8 ar jonno 2
    }
    for (int i = 1; i < N; i++)
        cout << i << ' ' << spf[i] << '\n';
    return 0;
}

/*
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        bool flag = false;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                cout << i << ' ' << j << '\n';
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << i << ' ' << i << '\n';
 }*/