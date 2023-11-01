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
        for(int j=1; i*j<=n; j++)
        {
            //but j n bar coltece na j kintu j+i hoye jacce next j bar theke
            sum+=j;
        }
    }
    cout<<sum<<endl;
}
//ai program ar time complexity koto
//i ar jonno O(n)
//but j ar jonno holo average O(logn)
//equationally total time complexity O(n*log)
