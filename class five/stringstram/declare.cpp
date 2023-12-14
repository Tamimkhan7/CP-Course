#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "12 20        85  25    36   14  25 60 89";
    stringstream ss(s);
    int a,b,c,d;
    //ss>>a>>b>>c>>d;//akhn value gula stringstream theke nicce
    //cout<<a<<' '<<b<<' '<<c<<' '<<d<<'\n';

    int n;
    while(ss>>n)cout<<n<<'\n';
}
