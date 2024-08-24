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
    sequence(pos + 1, current_sum + a[pos]); // is taken
    sequence(pos + 1, current_sum);          // is not taken
}
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> target_sum;
    ct = 0;
    sequence(0, 0);
    cout << ct << endl;
}
