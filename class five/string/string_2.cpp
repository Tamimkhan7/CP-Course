#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    s = "Helloworld";
    //cout<<s.max_size()<<'\n';//find the string max_size
    //s.resize(2);//resize korbe character hoyto ja thakbe ta thakbe
    cout<<s<<'\n';
    s.resize(20);//resize korbe extra space gula khali theke jabe jodi character insert kori tahle string kaj korbe
    cout<<s<<'\n';
    reverse(s.begin(), s.end());
    cout<<s<<'\n';
    sort(s.begin(), s.end());
    cout<<s<<'\n';

    s.insert(8,"xp");
        cout<<s<<'\n';
}
