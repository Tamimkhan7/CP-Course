#include <bits/stdc++.h>
using namespace std;
void summation()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n==i)cout<<i;
        else
            cout<<i<<" ";
    }
}
int main()
{
    summation();
}
