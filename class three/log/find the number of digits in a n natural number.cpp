#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    /*long long fact=1;
    for(int i=1; i<=n; i++)fact*=i;
    cout<<floor(log10(fact)+1)<<'\n';//which is infinity, n<30 kaj kore ar por ar kaj kortece na
    //so sei khette ami korte pari akta formula use
    //log10(a*b)= log10(a)+log10(b);
    //n! all value gula ami ar modde rekhe dite pari ans nibo na but all digit ber kore pelbo
    */
    double ans =0;
    for(int i=1; i<=n; i++)ans +=log10(i);
    cout<<floor(ans)+1<<endl;
}
