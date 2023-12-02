#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    cout<<&a<<'\n';//aita value address ke print dibe,, value ta kon point a ace oitaii print korbe
    int *ptr = &a;//a value ar address ke ptr point kortece
    cout<<ptr<<'\n';

    cout<<*ptr<<'\n';//jei address ptr niddes kortece tar value ta print koro

    *ptr = 10;
    cout<<*ptr<<'\n';
}
