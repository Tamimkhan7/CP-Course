#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        long long fact = 1;
        for(int i=1; i<=n; i++)
        {
            fact = (fact*i)%mod;
        }
        cout<<fact<<endl;
    }

    return 0;
}
