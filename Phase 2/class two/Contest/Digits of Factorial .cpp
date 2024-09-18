// A optimised program to find the
// number of digits in a factorial in base b
// Returns the number of digits present
// in n! in base b Since the result can be large
// long long is used as return type
#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define ll long long

ll findDigits(int n, int b)
{

    if (n < 0)
        return 0;

    if (n <= 1)
        return 1;

    double x = ((n * log10(n / M_E) + log10(2 * M_PI * n) / 2.0)) / (log10(b));

    return floor(x) + 1; // floor(x) + 1 means this value convert to the integer that value automatically convert to the floor
}

int main()
{
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ": ";
        int a, b;
        cin >> a >> b;
        cout << findDigits(a, b) << '\n';
    }

    return 0;
}
