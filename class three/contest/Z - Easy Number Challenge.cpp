#include <bits/stdc++.h>
using namespace std;
#define mod 1073741824
int main()
{
    long long sum =0;
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            for(int k=1; k<=c; k++)
            {
                if(a%i==0 && b%j==0 && c%k==0)
                {
                    sum =(sum+(i*j*k))%mod;
                }
            }
        }
    }
    cout<<sum<<endl;
}
