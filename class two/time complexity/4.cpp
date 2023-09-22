#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) // aita lage linear time complexity
    {
        for (int j = 1; j <= n; j *= 2) // ar aitay time complexity holo log n karon holo ai khane j ar previous value double hoye jacce and n ar khub kacakaci cole jacce
        {
            sum += i + j;
        }
    }
    // tahole total program a time complexity holo O(n log n)//aitaii bola jay
    cout << sum << endl;
}