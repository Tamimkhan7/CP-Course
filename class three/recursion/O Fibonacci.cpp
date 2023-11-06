#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if(n==0 || n==1)return n;
    else return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cin>>n;
    fibonacci(n);
    for(int i=n-1; i>=0; i--)
    {
        cout<<fibonacci(i)<<endl;
        return 0;
    }
}
