#include<bits/stdc++.h>
using namespace std;
void print_digit(int n)
{
    if(n==0)return;//base case
    int last_digit = n%10;
    int number_without_last_digit = n/10;
    print_digit(number_without_last_digit);
    cout<<last_digit<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0)cout<<0<<" ";//special case
        else
        {
            print_digit(n);
            cout<<endl;
        }
    }
}
