#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //double sum =0;
    for(int i=1; i<=n; i++)
    {
        //all min nearest 2nd power
        cout<<(1<<(int)floor(log2(i)))<<" ";
    }
    cout<<endl;
}
