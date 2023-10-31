#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 1)
        return 1;
    return fact(n - 1) * n; // means holo (n-1 )ar kono value amr multiplication hocce na, multiplication hocce sudu n ar value aita basically stack ar moto kaj kore like LIFO-last in first out, last ar jei value ta asbe oi ta first a beriye jabe aitai basically hoy
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
}