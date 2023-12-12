#include <bits/stdc++.h>
using namespace std;
//mutliset basically element gula sorted thakbe but kono unique thakbe na
void print(multiset<int> se)
{
    for (auto x: se)
    {
        cout << x << ' ';
    }
    cout << '\n';
}

int main()
{
    multiset<int> se{2, 3, 1, 2, 3};

    // Function: insert
    se.insert(4);
    print(se); // Output: 1 2 2 3 3 4

    // Function: find
    auto it = se.find(2);
    if(it != se.end())
    {
        cout << "Found: " << *it << '\n'; // Output: "Found: 2"
    }
    else
    {
        cout << "Not found!\n";
    }

    // Function: erase (all occurrences)
    se.erase(2);//ai vabe dile 2 ar all element deleted hoye jabe
    print(se); // Output: 1 3 3 4

    // Function: erase (using iterator)
   auto it1 = se.find(3);
   se.erase(it1);//ai vabe caile koyekta akhn element theke akta element bad diye deoya jay
    print(se); // Output: 1 3 4

    se.insert(2);
    se.insert(2);
    se.insert(2);
    print(se); // Output: 1 2 2 2 3 4
    // Function: erase (remove one occurrence)
    auto it2 = se.find(2);
    if (it2 != se.end())
    {
        se.erase(it2);
    }
    print(se); // Output: 1 2 2 3 4

    // Function: count
    cout << "Occurrences of 2: " << se.count(2) << '\n'; // Output: "Occurrences of 2: 2"

    // Print the multiset elements from front to back
    cout << "Multiset elements from front to back: ";
    for (auto it = se.begin(); it != se.end(); ++it)
    {
        cout << *it << ' ';
    }
    cout << '\n'; // Output: "Multiset elements from front to back: 1 2 2 3 4"

    // se.erase(se.find(10));
    // This will throw an error as 10 is not present in the multiset,
    // so se.find(10) will return se.end() and se.erase(se.end()) is not allowed
    // because you can't erase an iterator that is not pointing to an element in the multiset

    return 0;
}
