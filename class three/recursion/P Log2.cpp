#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void lg(ll n)
{
    if(n==n)
    {
        cout<<(ll)log2(n)<<endl;
        return;
    }
    lg (n-1);
}
int main()
{
    ll n;
    cin>>n;
    lg(n);

}
