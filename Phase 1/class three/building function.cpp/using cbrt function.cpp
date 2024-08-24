#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    //value ta must be double a asbe
    cout<<cbrt(a)<<endl;//3root(a),,ai result ta de, mane cube root ar answer ta diye dey
    //but amra jodi cbrt ar value ta long double a ante cbrtl function use kora lagbe basically
    cout<<cbrtl(a)<<endl;
}
