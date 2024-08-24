#include <bits/stdc++.h>
using namespace std;
int main()
{
    // right shift hole value ta 2^n dara vag hoy, for example - 1>>n, one ar value ta n tom bar dane jabe, in normal calculate korte pari 2^n dara vag korte pari
    // left shift hole value ta 2^n dara gun hoy, for example - 1<<n, one ar value ta n tom bar bame jabe, in normal calculate korte pari 2^n dara gun kore

    int n, k;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) // aita lage linear time complexity
    {
        for (int j = 1; j <= (1 << n); j++) //<< ai left shift means holo ami n ar value ke ak gor bame  nicci
        {
            sum += i + j;
        }
    }
    // tahole total program a time complexity holo O(2^n)//aitaii bola jay
    cout << sum << endl;
}
