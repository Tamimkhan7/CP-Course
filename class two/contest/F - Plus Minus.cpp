#include <bits/stdc++.h>
using namespace std;
void plusMinus(int ar[], int n)
{
    int positive_numbers = 0, negative_numbers = 0, zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 0)
            positive_numbers++;
        else if (ar[i] < 0)
            negative_numbers++;
        else
            zero++;
    }
    // setprecision upore use korle nice joto sob ace baki sobar jonno kaj korbe
    cout << fixed << setprecision(6);             // setprecision use kora hoy ami koy ghor projnto print dite cacci ta korar jonno setpricision use kora hoy
    cout << (double)positive_numbers / n << endl; // akta value ke typecust korle baki sokol value type cust hoye jay
    cout << (double)negative_numbers / n << endl;
    cout << (double)zero / n << endl;
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