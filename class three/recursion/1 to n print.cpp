#include <bits/stdc++.h>
using namespace std;
void get_sum(int n)
{
    if (n == 0)
        return;

    get_sum(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cin >> n;
    get_sum(n);
}