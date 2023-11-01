#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mod = 1e9+7;
    int a,b,c,d;
    a = 1e9, b= 1e9, c =1e9,d=1e9;
    cout<<(a*b*c*d)%mod<<endl;//basically result ta overflow hocce tai se khette holo je amake age mod kore value ta choto kore nite hobe
    //ai result ta exactly astece so kono overflow hocce na
    cout<<(((1LL *a*b)%mod*c)%mod*d)%mod<<endl;//1LL means holo long long integer

}
