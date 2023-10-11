#include <bits/stdc++.h>
using namespace std;
void plusMinus(int ar[], int n)
{
    int count = 0, ans = 0, zero_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 0)
            count++;
        else if (ar[i] < 0)
            ans++;
        else
            zero_count++;
    }
    double positive_ration = double(count) / double(n);
    double nagative_ration = double(ans) / double(n);
    double zero_ration = double(zero_count) / double(n);
    printf("%.6lf\n", positive_ration);
    printf("%.6lf\n", nagative_ration);
    printf("%.6lf\n", zero_ration);
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    plusMinus(ar, n);
}