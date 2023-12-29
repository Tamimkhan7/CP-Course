#include <bits/stdc++.h>
using namespace std;
void mul(int &n)
{
    cout<<&n<<'\n';
    n*=10;
}

int main()
{
    int n;
    cin>>n;
    cout<<&n<<'\n';
    mul(n);
    cout<<n<<'\n';
}
