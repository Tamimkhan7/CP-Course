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

    for(int i=1; i<=n; i++)
        cin>>a[i];
//aita akta process
    /*vector<int>v;
    for(int i=1; i<=n; i++)
    {
        v.push_back(a[i]);
        if(v.size()>=k)
        {
            sort(v.begin(), v.end());
            cout<<v[k-1]<<'\n';
        }
    }*/
    priority_queue<int>p;
    for(int i=1; i<=n; i++)
    {
        p.push(a[i]);
        if(p.size()>k)  p.pop();
        if(p.size()== k)
            cout<<p.top()<<' ';
        else cout<<-1<<' ';
    }

}
