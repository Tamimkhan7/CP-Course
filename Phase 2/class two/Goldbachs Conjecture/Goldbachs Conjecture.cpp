

/*goldbachs conjecture menas two ta prime diye akta value ke divided kora jay kina
a+b==n
//there are three case we see
first one is --- if n is prime that is the ans is 1
if n is even that are divisible are two prime that the nunber for that is the correct ans is --2
if n odd, then we can check two case first one is-- a = 2 and n-2 is prime that the time ans is 2
otherwise ans is 3 always is correct--for example -- n is 31, firstly we can subtract from n 3 then the value is 28 thai is even, goldbach structure means if number is even that is divided any two prime number that why for this case correct answer is 3
*/
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
const int N = 1e5 + 9;
int spf[N];
void sieve()
{
    for (int i = 2; i < N; i++)
        spf[i] = i;
    for (int i = 2; i < N; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i; j < N; j += i)
                spf[j] = min(spf[j], i);
        }
    }
}
bool ok(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (spf[i] == i and spf[n - i] == n - i)
            return true;
    }
    return false;
}
int32_t main()
{
    MTK;
    sieve();
    for (int i = 2; i <= 100; i++)
    {
        if (ok(i))
            cout << i << '\n';
    }

    return 0;
}