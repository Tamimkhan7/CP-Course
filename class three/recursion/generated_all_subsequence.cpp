#include <bits/stdc++.h>
using namespace std;
int a[100], n;
bool is_taken[100];
void rec(int pos)
{
    if (pos > n)
    {
        for (int i = 1; i <= n; i++)
        {
            if (is_taken[i])
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
        return;
    }
    // cout << "L ower brand " << pos << " ";
    is_taken[pos] = false; // hoyto nibo na
    rec(pos + 1);
    // cout << "upper brand " << pos << " ";
    is_taken[pos] = true; // noyto nibo
    rec(pos + 1);
}
int main()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    rec(1);
}