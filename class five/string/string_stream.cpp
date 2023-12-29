
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,sx;
    getline(cin, s);
    stringstream sp(s);//stringstream ar keyword dite hobe
    int ans=0;
    while(sp>>sx)ans++;//arekta sring niye loop niye dekhte hobe string a koyta word ache
    cout<<ans<<'\n';

}
