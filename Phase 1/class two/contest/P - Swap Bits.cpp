#include <bits/stdc++.h>
using namespace std;
#define llu unsigned long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        llu ans = 0; // jodi amar value ta hoy amn binary representation 10101101- adjacent bit mane hoy pasa pasa two ta bit ke swap kore dite hobe then oi biter binary representation ke decimal a convert korte hobe
        for (int i = 0; i < 32; i += 2)
        {
            int a = (n >> i) & 1;       // that means n ke i tom bit ber korlam dekhlam je i ar bit a 1 kina
            int b = (n >> (i + 1)) & 1; // that means i+1 tom bit ta ki ace
            swap(a, b);
            if (a)
            {
                ans += 1 << i; // aita means holo,2 ar value ber kore sum kortecit
            }
            if (b)
            {
                ans += 1 << (i + 1);
            }
        }
        cout << ans << endl;
    }
}
// explain  this code ---- jodi amader value ta hoy  10-1010, tahole amar a=0, b=1, swap korle hobe a=1, b=0, ,,,,
// then i =0 hoy than a true hoy then 1 ar value take i tom bar right shift korteci, mane hobe 2 dara i bar gun korteci tokh hobe 1 res,
// then second time abar asbe tokhn i =2, tokhn abar 1 ke two bar right shift korbo then res asbe 4 total ta sum kore aitai ans for 10