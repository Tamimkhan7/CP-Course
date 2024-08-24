#include <bits/stdc++.h>
using namespace std;
int x,y;
void swap_value()
{
    int temp = x;
    x =y;
    y =temp;
}
int main()
{
    cin>>x>>y;
    swap_value();
    cout<<x<<" "<<y<<endl;
}
