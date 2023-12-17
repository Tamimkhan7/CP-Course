#include <bits/stdc++.h>
using namespace std;
void print(queue<int>q)
{
    while(!q.empty())
    {
        cout<<q.front()<<' ';
        q.pop();
    }
    cout<<'\n';
}
int main()
{
    int n,k;
    cin>>n>>k;//10 4
    int a[n+1];//2 3 6 5 4 8 9 5 3 9
    queue<int>q;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int sum  =0;
    for(int i=1; i<=k; i++)
    {
        sum+=a[i];
        q.push(a[i]);
    }
    for(int i=k; i<=n; i++)
    {
        print(q);
        cout<<"answer of kth element summation " <<sum<<'\n';
        sum -= q.front();
        q.push(a[i+1]);
        q.pop();
        if(i+1<=n)
        {
            sum += a[i+1];
        }
    }
}
