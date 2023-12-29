#include<bits/stdc++.h>
using namespace std;
void print_digit(int n)
{
    if(n==0)return;//base case
    int last_digit = n%2;
    int number_without_last_digit = n/2;
    print_digit(number_without_last_digit);
    cout<<last_digit;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        print_digit(n);
        cout<<endl;

    }
}
