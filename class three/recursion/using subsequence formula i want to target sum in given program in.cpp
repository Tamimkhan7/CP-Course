#include <bits/stdc++.h>
using namespace std;
int n, a[100], ct, target_sum;
void sequence(int pos, int current_sum)
{
    if (pos == n)
    {
        if (current_sum == target_sum)
        {
            ct++;
        }
        return;
    }
    sequence(pos + 1, current_sum + a[pos]);
    sequence(pos + 1, current_sum);
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    target_sum = 5;
    ct = 0;
    sequence(0, 0);
    cout << ct << endl;
}