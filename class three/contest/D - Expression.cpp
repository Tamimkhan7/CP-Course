#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c;
    cin>>a>>b>>c;
 int maxi =-1e5;
 int res;
 res = a+b*c; maxi = max(res, maxi);
 res = a*b+c; maxi = max(res, maxi);
 res = (a+b)*c; maxi = max(res, maxi);
 res = (a*b)+c; maxi = max(res, maxi);
 res = a+(b*c); maxi = max(res, maxi);
 res = a*(b+c); maxi = max(res, maxi);
 res = a+b+c; maxi = max(res, maxi);
 res = a*b*c; maxi = max(res, maxi);
 cout<<maxi<<endl;

}
