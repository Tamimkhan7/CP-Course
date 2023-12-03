#include <bits/stdc++.h>
using namespace std;
int div(int a, int b)
{
    assert(b!=0);
    return a/b;
}
int main()
{
    int n;
    cin>>n;
    assert(n>=1 && n<=100)cout<<n<<'\n';//assert mainly used my input or my value between the condition if my condition is false assert return runtime error, if my condition is true assert return executed is successfully

    cout<<div(10,2)<<'\n';
    cout<<div(10,0)<<'\n';
}
