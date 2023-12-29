#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0; // that means ai code ta average log n a kaj korbe karon ai code ta i ar value each time double hoye jacce
    // sei kkhtte amra bolte pari ai code ar time complexity hobe log n
    for (int i = 1; i <= n; i *= 2)
    {
        sum += i;
    }
    cout << sum << endl;
    // second arek ta way dekhi
    sum = 0;
    // ai code ar oh means holo same karon holo ai code taoh time complexity hobe log n//karon ai program taoh n ar value 2 dara divided hocce se kkhette ar bare se tar ager valuer half value diye dicce

    while (n > 0)
    {
        sum += n;
        n /= 2;
    }
    cout << sum << endl;
}