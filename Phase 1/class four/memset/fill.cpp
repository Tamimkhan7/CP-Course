#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    fill(a, a + n, 0); // fill ar first a array ta nite hobe second a a+size ta nite hobe third a initialization value ta nite hobe
    // fill and memset same kaj kore but memset better than fill, memset faster than fill, then we will use memset in out code
    // print the array initialization value

    for (int i = 0; i < n; i++)
        cout << a[i] << '\n';
}
// memset is faster than fill although both are O(n).
