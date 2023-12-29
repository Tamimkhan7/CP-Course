#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    s = "Hello";
    cout<<s<<'\n';

    s.push_back('!');//push_back similar vector ar moto kaj kore but aita character nibe
    cout<<s<<'\n';

    s.push_back('t');
    cout<<s<<'\n';
    s.pop_back();//deleted last character//same vector ar moto kaj kore
    cout<<s<<'\n';

    // s.clear();//clear to the vector
    if(s.empty())cout<<"YES"<<'\n';
    else cout<<"No"<<'\n';


    cout<<s.front()<<'\n';//print to the first character
    cout<<s.back()<<'\n';//print to the last character

    cout<<s.at(2)<<'\n';//print to the indicated position

}
