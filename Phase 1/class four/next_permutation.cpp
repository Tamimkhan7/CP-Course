#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

void print(vector<int> v)
{
    for (auto x : v)
        cout << x << ' ';
    cout << '\n';
}
int32_t main()
{
    MTK;

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    // next_permutation//aita building function//porer joto permutation ace sokol permutation print kore//permutation basically hoy lexicographically
    // prev_permutation//aita building function//ager joto permutation ace sokol permutation print kore//permutation basically hoy lexicographically
    // best holo,, do while loop use kora, tobe arek vabe kora jay,,, just while diye use kora jay
    int ans = 0;
    do
    {
        ans++;
        print(v);
    } while (next_permutation(all(v)));
    cout << ans << '\n';
}