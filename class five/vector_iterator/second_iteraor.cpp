#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();
    cout << (*it) << '\n'; // Output: 1//
    it++;//increment of the iterator
    cout << (*it) << '\n'; // Output: 2
    it += 2;//increment of the iterator
    cout << (*it) << '\n'; // Output: 4
    it--;//decrement of the iterator
    cout << (*it) << '\n'; // Output: 3
    it -= 2;//decrement of the iterator
    cout << (*it) << '\n'; // Output: 1
    it= v.end();
    cout<<*it<<'\n';//this is should be print garbej value or 0
    //hence , v.end(), bolte bujay last ar valuer porer value, sei value to nai vector ar tai, 0 or garbaz value print kore, but sei jonno v.end()-1, always ai syntax use korte hobe

    //print the all iterator value
    cout<<"print the of all the vector value"<<'\n';
    for(auto it=v.begin(); it!=v.end(); it++)cout<<*it<<'\n';
//iterator distance substract
    cout<<"working 2nd vector"<<'\n';
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int>::iterator it1 = v1.begin() + 1;
    vector<int>::iterator it2 = v1.end();
    cout << (it2 - it1) << '\n'; // Output: 4

}
