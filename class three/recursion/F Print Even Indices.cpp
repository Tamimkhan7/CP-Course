#include<bits/stdc++.h>
using namespace std;
void print_even_indices(int n, int a[])
{
    int x;
    if(n==-1)return;//base case
    if(n%2==0)
        cout<<a[n]<<" ";

    print_even_indices(n-1, a);


}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    print_even_indices(n-1, a);
    cout<<endl;
}
