#include <bits/stdc++.h>
using namespace std;
void mini_maxi(int a[], int n)
{
    int maxi = -1e5, mini = 1e5;
    for(int i=0; i<n; i++)
    {
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }
    cout<<"The maximum number : "<<maxi<<endl;
    cout<<"The minimum number : "<<mini<<endl;
}
void prime_check(int a[], int n)
{
    int ans=0,x;
    for(int i=0; i<n; i++)
    {
        int flag =0;
        x = a[i];
        if(x==1)flag=1;
        for(int j=2; j<=sqrt(x); j++)
        {
            if(x%j==0)
            {
                flag =1;
                break;
            }
        }
        if(!flag)ans++;
    }
    cout<<"The number of prime numbers : "<<ans<<endl;
}
void palindrom_check(int a[], int n)
{
    int ans =0;
    for(int i=0; i<n; i++)
    {
        int x = a[i];
        if(x<10)ans++;
        else
        {
            string s,ss;
            s = to_string(x);
            ss =s;
            reverse(s.begin(), s.end());
            if(s==ss)ans++;
        }
    }
    cout<<"The number of palindrome numbers : "<<ans<<endl;
}
void maximum_divisor(int a[],int n)
{

    sort(a, a+n, greater<int>());
    int ans, maxi=-1;
    for(int i=0; i<n; i++)
    {
        int ct=0;
        int x = a[i];
        for(int j=1; j<=(x); j++)
        {
            if(x%j==0)
            {
                ct++;
            }
        }
        if(ct>maxi)
        {
            maxi = ct;
            ans = x;
        }
    }
    cout<<"The number that has the maximum number of divisors : "<<ans<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    mini_maxi(a, n);
    prime_check(a, n);
    palindrom_check(a, n);
    maximum_divisor(a,n);
}
