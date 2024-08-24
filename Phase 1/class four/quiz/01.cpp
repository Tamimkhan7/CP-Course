#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    for(int i=1; i<=99; i++)
    {
        ans^=i;
    }
    for(int i=1; i<=2023; i++)
    {
        ans^=2;
    }
    for(int i=1; i<=100; i++)
    {
        ans^=i;
    }
    cout<<ans<<endl;
}

