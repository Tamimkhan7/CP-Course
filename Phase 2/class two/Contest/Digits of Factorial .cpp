// A optimised program to find the
// number of digits in a factorial in base b
// Returns the number of digits present
// in n! in base b Since the result can be large
// long long is used as return type
#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define ll long long

// ll findDigits(int n, int b)
// {

//     if (n < 0)
//         return 0;

//     if (n <= 1)
//         return 1;

//     double x = ((n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0)) / (log10(b));
//     return floor(x) + 1;
// }
const int N = 1e6 + 9;
double p[N];
int main()
{
    for (int i = 1; i < N; i++)
        p[i] = p[i - 1] + log2(i);
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ": ";
        int a, b;
        cin >> a >> b;
        // kono number ar digits ber korar formula holo -- log10(n)+1;
        // but ai khane jehetu b base tahole amake b base niye cinta korte hobe
        double ans = 0;
        // factorial is for a number is like -- n*n-1*n-2*n-3---------2*1;
        /* formula holo---(log(n)+log(n-1)+log(n-2).............log(2)+log(1))+1*/
        // for (int i = 1; i <= a; i++)
        //     ans += log2(i) / log2(b);
        ans = p[a];
        ans /= log2(b);
        cout << int(floor(ans) + 1) << '\n';
    }

    return 0;
}
