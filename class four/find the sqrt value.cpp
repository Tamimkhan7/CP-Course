#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int n;cin>>n;
    int ans = sqrt(n);//amra jani ai result ta accurate value dey na, tai amra sqrt buil functin diye value kaca kaci cole geci
    //then akta while loop caliye amra valuer safe zone a thakte cai
    while(ans*ans<=n)ans++;
    while(ans*ans>n)ans--;
    cout<<ans<<endl;

}
