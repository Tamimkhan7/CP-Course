#include <bits/stdc++.h>
using namespace std;
int a[22],n;
bool is_taken[22];
void rec(int pos)
{
    cout<<"position : "<<pos<<" ";
    if(pos==n)
    {
        for(int i=1; i<=n; i++)
        {
            if(is_taken[i])
            {
                cout<<endl<<a[i]<<" ";
            }
        }
        cout<<endl;
        return;
    }
    is_taken[pos]=false;//do not taken
    rec(pos+1);
    is_taken[pos]=true;//is taken
    rec(pos+1);

}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)cin>>a[i];
    //we created first position
    rec(1);
}
