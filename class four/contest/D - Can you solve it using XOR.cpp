#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin>>n;
    int ans =0;
    while(n--)
    {
        int x;
        cin>>x;
        ans ^=x;
    }
    cout<<ans<<endl;
}
