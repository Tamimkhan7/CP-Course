#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);

    string word;
    while(ss>>word)
    {
        int n = word.size();
        for(int i=0; i<n; i++)cout<<word[i]<< ' ';
        cout<<'\n';
    }
}
