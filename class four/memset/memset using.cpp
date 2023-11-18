#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;;
    cin>>n;
    int a[n];
//memset basically direct size niye kaj korte pare na, memset basically byte nite kaj kore
//memset(a, 0, n);//first a array second a kon value ta initilization korbo, then size dibo
//memset use kora hoy basically kon akta value ba array ke jokhn initilization kori na tokhn amader garbaz value provided kore,
//sei jonno amra memset use kore amta value initilazation kore rakhi, that's set
    int x;
    cin>>x;
    memset(a, x, sizeof(a));//time complexity
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<'\n';

    }
//actually memset 0 or -1 bade onno kono valuer jonno kaj kore na
    cout<<bitset<32>(x)<<'\n';

}
