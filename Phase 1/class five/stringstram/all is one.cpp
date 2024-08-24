#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s = "  I am Bapparaj. I am 20 years old.  ";
    stringstream ss(s); // ss is now a stream that contains the string s
    cout << ss.str() << '\n'; // print the string in the stream
    string word;
    while (ss >> word)   // read words from the stream, almost like cin >> word
    {
        cout << word << '\n';
    }
    // So this is useful when you want to get all the words from a string one by one
    return 0;
}
