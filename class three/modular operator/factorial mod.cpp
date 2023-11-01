#include <bits/stdc++.h>
using namespace std;

int main()
{
    int fact=1, mod = 1e9+7;
    int n;
    cin>>n;
    for(int i=1; i<=n;  i++)
    {
        fact = (1LL*fact*i)%mod;//factorial n ar big number ar jonno overflow hocce se jonno amar long long a convert kore nite hobe
    }
    cout<<fact%mod<<endl;//result ta normally factorial korle overflow hoye jacce se jonno ageii choto kore factorial kore nite hobe
}
//all right everything
