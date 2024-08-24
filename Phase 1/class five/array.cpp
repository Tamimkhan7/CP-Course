#include <bits/stdc++.h>
using namespace std;
void call_arr(int a[], int n) //array always value address soho pass hoy, sei khette array value sub function change korle akbare main function ar array oh change hoye jay
{
    for(int i=0; i<n; i++)
    {
        a[i]+=2;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    call_arr(a,n);//call by function
    //jodi array value onno kono function dara change kori tahole main fucniton ar value change hoye jabe
    //karon array always value reference soho pass hoy
    for(int i=0; i<n; i++)cout<<a[i]<<" ";
}
