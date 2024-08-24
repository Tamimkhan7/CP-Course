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

bool ok(int x)
{
    cout << x << endl;
    string s;
    cin >> s;
    return s == "yes";
}
bool is_prime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int32_t main()
{
    int divisor = 0;
    if(ok(2*2) or ok(3*3) or ok(5*5) or  ok(7*7))
    {
        cout<<"composite"<<endl;
        return 0;
    }
    for (int i = 2; i <= 50; i++)
    {
        if(is_prime(i))
            divisor += ok(i);//i used maximum number of query 20
    }
    if (divisor == 1)
        cout << "prime" << endl;
    else
        cout << "composite" << endl;
    return 0;
}
/* int l = 1, r = 1e6, ans = -1;
 while (l <= r)
 {
     int mid = (l + r) / 2;
     string s = ok(mid);
     if (s == ">=")
     {
         ans = mid;
         l = mid + 1;
     }
     else
         r = mid - 1;
 }
 cout << "! " << ans << '\n';
 cout.flush();*/
