#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::reverse_iterator it = v.rbegin();//reverse iterator declare korte hobe reverse_iteraror function diye,,,
//first value find korte hole rbegin dite first value khujte hobe
//last value find korte hole rend function use korte hobe
    cout << (*it) << '\n'; // Output: 5
    it++;
    cout << (*it) << '\n'; // Output: 4
    it += 2;
    cout << (*it) << '\n'; // Output: 2
    it--;
    cout << (*it) << '\n'; // Output: 3
    it -= 2;
    cout << (*it) << '\n'; // Output: 5

    //print the all reverse_vector value useing iteraror
    cout<<"Print reverse_iterator value" <<'\n';
   for(auto it = v.rbegin(); it!=v.rend(); it++)cout<<*it<<'\n';

}
