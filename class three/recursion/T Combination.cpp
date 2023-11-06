#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10000000007
int C(int n, int r)
{
    if(n<r || r<0 || n<0)return 0;
    if(n==0)return 1;
    return C(n-1, r)+C(n-1, r-1);
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<C(n,r)<<endl;
}

