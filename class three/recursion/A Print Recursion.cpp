#include <bits/stdc++.h>
using namespace std;
void print_recursion(int n)
{
    if(n==0)return;
    cout<<"I love Recursion"<<endl;
    print_recursion(n-1);
}
int main()
{
    int n;
    cin>>n;
    print_recursion(n);
}
