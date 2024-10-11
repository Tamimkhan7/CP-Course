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
string a;
struct node
{
    int one, zeros;
};
node t[4 * N];
bool lazy[4 * N];
void push(int n, int b, int e)
{
    if (lazy[n] == false)
        return;
    swap(t[n].one, t[n].zeros); // inverted korteci, jodi  1 thake tahole zero kore dicci arh zero thakle one kore dicci
    if (b != e)
    {
        ll mid = (b + e) / 2;
        ll l = 2 * n, r = 2 * n + 1;
        // lazy[l] = lazy[l] == true ? false : true; // mane holo jodi lazy akbar ageii inverted hoye ace akhn jodi abar inverted kora lage tahole to se ager obstay cole aslo, ai jonno age aktabar update hoye gele akhn ar invieted kora lagbe na
        // lazy[r] = lazy[r] == true ? false : true;
        // both are same, above and below funciton are same
        lazy[l] ^= true;
        lazy[r] ^= true;
    }
    lazy[n] = false;
}

node merge(node l, node r)
{
    node ans;
    ans.one = l.one + r.one;
    ans.zeros = l.zeros + r.zeros;
    return ans;
}
void build(int n, int b, int e)
{
    lazy[n] = false; // that is initially false all of them, convert to them
    if (b == e)
    {
        t[n].one = t[n].zeros = 0; // first time we will let assume all are equal zero
        if (a[b] == '1')
            t[n].one = 1;
        else
            t[n].zeros = 1;
        return;
    }
    int mid = (b + e) / 2;
    int l = 2 * n, r = 2 * n + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}

void update(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (e < i or j < b)
        return;
    if (i <= b and j >= e)
    {
        // ai khane xor na korle oh hobe, tahole already sob push hoye ace, akhn sob false, tai ai range ar akhn sob inverted kora lagbe
        lazy[n] = true; // set lazy value of this node
        push(n, b, e);
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n, r = 2 * n + 1;
    update(l, b, mid, i, j);
    update(r, mid + 1, e, i, j);
    t[n] = merge(t[l], t[r]);
}

node query(int n, int b, int e, int i, int j)
{
    push(n, b, e);
    if (e < i or j < b)
        return {0, 0}; // karon amra jani amar zeros and one ar count 0 theke boro hoye jete pare, taiii 0 dile ar problem korbe na
    if (i <= b and j >= e)
        return t[n];

    int l = 2 * n, r = 2 * n + 1;
    int mid = (b + e) / 2;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int32_t main()
{
    MTK;
    int t, cs = 0;
    cin >> t;
    while (t--)
    {
        cout << "Case " << ++cs << ":\n";
        cin >> a;
        int n = a.size();
        int q;
        cin >> q;
        build(1, 0, n - 1); // such that string is 0-indexing
        while (q--)
        {
            char ty;
            cin >> ty;
            if (ty == 'I')
            {
                int l, r;
                cin >> l >> r;
                l--, r--;
                update(1, 0, n - 1, l, r);
            }
            else
            {
                int i;
                cin >> i;
                i--;
                node ans = query(1, 0, n - 1, i, i);
                if (ans.one == 1)
                    cout << 1 << '\n';
                else
                    cout << 0 << '\n';
            }
        }
    }
    return 0;
}