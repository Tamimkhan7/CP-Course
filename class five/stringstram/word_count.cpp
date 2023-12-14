#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);

    string word;
    int word_count =0;
    while(ss>>word)
    {
        cout<<word<<' ';
        word_count++;
    }
    cout<<'\n';
    cout<<word_count<<'\n';
}
