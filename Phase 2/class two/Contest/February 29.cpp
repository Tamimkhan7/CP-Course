#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ": ";
        string month1, month2, date1, date2, year1, year2;
        cin >> month1 >> date1 >> year1;
        cin >> month2 >> date2 >> year2;
        date1.pop_back();
        date2.pop_back();
        string Months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        int i = 1, mo1, mo2;
        for (auto m : Months)
        {
            if (m == month1)
                mo1 = i;
            if (m == month2)
                mo2 = i;
            i++;
        }
        int y1 = stoi(year1), y2 = stoi(year2);
        int d1 = stoi(date1), d2 = stoi(date2);

        if (mo1 != 1 and mo1 != 2)
            y1++;
        if (mo2 == 1 || (mo2 == 2 and d2 < 29))
            y2--;

        int mul_of_4 = y2 / 4 - (y1 - 1) / 4;
        int mul_of_400 = y2 / 400 - (y1 - 1) / 400;
        int mul_of_100 = y2 / 100 - (y1 - 1) / 100;
        int ans = mul_of_4 + mul_of_400 - mul_of_100;
        cout << ans << '\n';
    }
    return 0;
}

// while (y1 <= y2)
// {
//     if ((y1 % 4 == 0 and y1 % 100 != 0) || (y1 % 400 == 0))
//     {
//         if (mo1 <= mo2 and mo1 <= 2)
//         {
//             ans++;
//             y1 += 4;
//         }
//     }
//     else
//         y1++;
// }
// cout << ans << '\n';