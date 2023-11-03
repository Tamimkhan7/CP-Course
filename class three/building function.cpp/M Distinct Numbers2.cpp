#include <iostream>
using namespace std;
bool has_number_occurred_in_range(int a[], int l, int r, int number)
{
    for (int i = 1; i <= r; i++)
    {
        if (a[i] == number)
            return true;
    }
    return false;
}
int count_distinct_elements(int a[], int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!has_number_occurred_in_range(a, 1, i - 1, a[i]))
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << count_distinct_elements(a, n) << '\n';
    return 0;
}
