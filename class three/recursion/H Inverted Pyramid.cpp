#include <bits/stdc++.h>
using namespace std;

void pyramid(int i, int n)
{
    if(i>n)return;
    int count_of_space = n-i;
    int count_of_star = 2*i-1;
    pyramid(i+1, n);
    for(int k=0; k<count_of_space; k++)cout<<" ";
    for(int i=0; i<count_of_star; i++)cout<<"*";
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    pyramid(1, n);
}
