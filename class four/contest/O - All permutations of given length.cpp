#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int a;
    cin>>a;
    string s;
    for(int i=1; i<=a; i++)s+=to_string(i);
    do
    {
            cout<<s<<'\n';
    }
    while(next_permutation(s.begin(), s.end()));

}

