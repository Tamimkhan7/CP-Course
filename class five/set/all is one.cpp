#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> se;
    se.insert(2);
    se.insert(3);
    se.insert(1);
    se.insert(2);

    // Function: insert
    se.insert(4); // se: 1 2 3 4

    // Function: erase
    se.erase(2); // se: 1 3 4

    // Function: find
    auto it = se.find(3);
    if (it != se.end()) {
        cout << "Found: " << *it << '\n'; // Output: "Found: 3"
    }

    // Function: size
    cout << "Size of the set: " << se.size() << '\n'; // Output: "Size of the set: 3"

    // Function: empty
    cout << "Is the set empty? " << (se.empty() ? "Yes" : "No") << '\n'; // Output: "Is the set empty? No"

    // Function: clear
    se.clear();

    // Function: lower_bound
    se.insert(3);
    se.insert(1);
    se.insert(2);
    auto lower_it = se.lower_bound(2);
    if (lower_it != se.end()) {
        cout << "Lower bound: " << *lower_it << '\n'; // Output: "Lower bound: 2"
    }

    // Function: upper_bound
    auto upper_it = se.upper_bound(2);
    if (upper_it != se.end()) {
        cout << "Upper bound: " << *upper_it << '\n'; // Output: "Upper bound: 3"
    }

    // Function: count
    cout << "Number of occurrences of 3: " << se.count(3) << '\n'; // Output: "Number of occurrences of 3: 1"

    // Print the set elements using iterators
    cout << "Set elements using iterators: ";
    for (auto it = se.begin(); it != se.end(); it++) {
        cout << *it << ' ';
    }
    cout << '\n'; // Output: "Set elements using iterators: 1 2 3"

    // Print the set elements using range-based for loop
    cout << "Set elements using range-based for loop: ";
    for (int x: se) {
        cout << x << ' ';
    }
    cout << '\n'; // Output: "Set elements using range-based for loop: 1 2 3"

    return 0;
}
