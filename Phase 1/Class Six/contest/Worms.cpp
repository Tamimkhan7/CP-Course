#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007
const int N = 1e5 + 9;
int a[N], p[N], pre[N];
int n, q;
int const Max_r = 1e6;
// bool ok(int x)
// {
//     auto ans = lower_bound(pre + 1, pre + n + 1, x);
//     return ans
// }
int32_t main()
{
    MTK;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
    }
    // pre[0] = 0;
    // for (int i = 1; i <= n; i++)
    // {
    // }
    //   for(int i=1; i<=n;i++)cout<<pre[i]<<' ';
    //   cout<<'\n';
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        auto ans = lower_bound(pre + 1, pre + n + 1, x);
        cout << (ans - pre) << '\n';
    }
    //   int l =1,r = Max_r, ans =0;
    //   while(l<=r){
    //     int mid = (l+r)/2;
    //     if(ok(mid)){
    //         ans = mid;
    //         r = mid-1;
    //     }else l = mid+1;
    //   }
    // auto ans = lower_bound(pre + 1, pre + n + 1, p[i]);
    // cout << ans << '\n';
}