#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int mem[26];
int main()
{
    string s,c;
    memset(mem, 0, sizeof(mem));
    cin>>s;
    int n = s.size();
    for(int i=0; i<n; i++)
    {
        mem[s[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(mem[i]==0)
        {
            cout<<(char)(i+'a')<<'\n';
            return 0;
        }
    }
    cout<<"None"<<'\n';
    return 0;

}
