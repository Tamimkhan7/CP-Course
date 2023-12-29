#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    int flag =0;
    if(n==1)flag=1;
    for(int i=2; i*i<=(n); i++)//using loop for logn
    {
        if(n%i==0)
        {
            flag =1;
            break;
        }
    }
    if(flag)return false;
    else return true;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
     int n;cin>>n;
     if(is_prime(n))cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
}
