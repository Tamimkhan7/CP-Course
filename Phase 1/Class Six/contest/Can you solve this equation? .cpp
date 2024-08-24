#include <bits/stdc++.h>
using namespace std;

double ok(double x)
{
    return 8 * x * x * x * x + 7 * x * x * x + 2 * x * x + 3 * x + 6;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double Y;
        cin >> Y;
        if (Y < (ok(0)) || Y > (ok(100)))
        {
            cout << "No solution!\n";
            continue;
        }

        double l = 0, r = 100;
        int it = 60;
        while (it--)
        {
            double mid = (l + r) / 2;
            if (ok(mid) >= Y)
                r = mid;
            else
                l = mid;
        }
        cout << fixed << setprecision(4) << l << "\n";
    }

    return 0;
}