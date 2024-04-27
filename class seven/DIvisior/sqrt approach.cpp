// prove//
// i*j=n // tahole j = (n/i);//bola jay karon j fic korle tahole i jonno value ber kora jay
// min(i,j)<=sqrt(n); tahole bola jay kono akta value sqrt n ar boro hobe na

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
    int n;
    cin >> n;
    set<int> se;
    // please avoid sqrt because that is work to the double proparty

    // for (int i = 1; i <= sqrt(n); i++)
    // {
    //     if (n % i == 0)
    //         cout << i << ' ' << n / i << '\n';
    // }

    // both are same

    for (int i = 1; i * i <= (n); i++) // ager ta aita akhn tai aita use kora better karon ai khane intger value niye kaj kortece kono precesion hocce na
    {
        if (n % i == 0)
        {
            se.insert(i);
            se.insert(n / i);
        }
    }
    for (auto x : se)
        cout << x << ' ';
    cout << '\n';

    return 0;
}
// total time complexity: sqrt(n)