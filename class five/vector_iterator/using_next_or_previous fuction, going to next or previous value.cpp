#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();
    cout << (*it) << '\n'; // Output: 1
    it = next(it);//one index next gele bola lagbe na koybar next a jacci
    cout << (*it) << '\n'; // Output: 2
    it = next(it, 2);//but aker odik bar next gele bole dite hobe koybar next a jacci
    cout << (*it) << '\n'; // Output: 4
    it = prev(it);//ar bar previous gele bolte hobe na koybar previous a jacci
    cout << (*it) << '\n'; // Output: 3
    it = prev(it, 2);////but aker odik bar previous gele bole dite hobe koybar previous a jacci
    cout << (*it) << '\n'; // Output: 1

}
