#include <bits/stdc++.h>
using namespace std;
int get_sum(int n)
{
    if (n == 0)
        return 0;

    int res = get_sum(n - 1) + n;
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << get_sum(n) << endl;
}