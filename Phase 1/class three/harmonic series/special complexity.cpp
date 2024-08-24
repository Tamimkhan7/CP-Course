#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long sum =0;
    for(int i=1; i<=n; i++)
    {
        //i n bar coltece
        for(int j=i; j<=n; j+=i)
        {
            //but j n bar coltece na j kintu j+i hoye jacce next j bar theke
            sum+=i+j;
        }
    }
    cout<<sum<<endl;
}
//ai program ar time complexity koto
//
