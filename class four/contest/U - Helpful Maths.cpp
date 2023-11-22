#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+9;
int a[N], pre[N];
int main()
{
    string s,ss;cin>>s;
    int n = s.size();
    for(int i=0; i<n;i++){
    if(i%2==0)ss+=s[i];
    }
    int x = ss.size();
    sort(ss.begin(), ss.end());
    for(int i=0; i<x-1; i++){
        cout<<ss[i]<<"+";
    }
    cout<<ss[x-1]<<endl;
}
