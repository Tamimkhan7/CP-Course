#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e5+5;
long long int pre1[N], pre2[N];
int main()
{
    int n;
    cin>>n;
   int a[n],b[n];
    for(int j=0; j<n; j++)
    {
        cin>>a[j];
        b[j]=a[j];
    }
    pre1[0]=a[0];
    for(int i=1; i<n; i++)
    {
        pre1[i]= a[i]+pre1[i-1];
    }
    sort(b, b+n);
    pre2[0]=b[0];
    for(int i=1; i<n; i++)
    {
        pre2[i]= b[i]+pre2[i-1];
    }
    int x;
    cin>>x;
    while(x--)
    {
        int m, l,r;
        cin>>m>>l>>r;
        l--, r--;
        if(m==1)
        {
            cout<<pre1[r]-pre1[l-1]<<'\n';
        }
        else
        {
            cout<<pre2[r]-pre2[l-1]<<'\n';
        }
    }

}
