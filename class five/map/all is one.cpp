#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> mp = {{2, "two"}, {1, "one"}, {4, "four"}};

    // Function: insert
    mp.insert({3, "three"});

    // Function: [key] (access)
    cout << mp[4] << '\n'; // Output: "four"

    // Function: [key] (update)
    mp[2] = "twwwwo";

    // Function: [key] (insert)
    mp[3] = "three";

    // Function: find
    auto it = mp.find(2);
    if (it != mp.end()) {
        cout << "Element found: {" << (*it).first << ", " << (*it).second << "}\n";
        // cout << "Element found: {" << it->first << ", " << it->second << "}\n";
    } else {
        cout << "Element not found.\n";
    }


    // Function: size
    cout << "Size of the map: " << mp.size() << '\n';

    // Function: empty
    cout << "Is the map empty? " << (mp.empty() ? "Yes" : "No") << '\n';


    // Function: lower_bound
    auto it_lower = mp.lower_bound(2);
    if (it_lower != mp.end()) {
        cout << "Lower bound: {" << it_lower->first << ", " << it_lower->second << "}\n";
    } else {
        cout << "No lower bound found.\n";
    }

    // Function: upper_bound
    auto it_upper = mp.upper_bound(2);
    if (it_upper != mp.end()) {
        cout << "Upper bound: {" << it_upper->first << ", " << it_upper->second << "}\n";
    } else {
        cout << "No upper bound found.\n";
    }

    // Function: erase
    mp.erase(2);

    // Print the map elements from front to back
    for (map<int, string>::iterator it = mp.begin(); it != mp.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "}\n";
    }

    for (auto x: mp) {
        cout << "{" << x.first << ", " << x.second << "}\n";
    }

    for (auto [key, value]: mp) { // C++17 or above
        cout << "{" << key << ", " << value << "}\n";
    }

    return 0;
}
