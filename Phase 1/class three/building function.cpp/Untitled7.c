#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int n;cin>>n;
int a[n];
for(int i=0; i<n; i++)cin>>a[i];


//is_sorted means holo akta array sorted kina jodi sorted hoy tahole 1 print dibe jodi sorted na hoy tahole 0 print dibe
cout<<is_sorted(a, a+n)<<endl;
}
