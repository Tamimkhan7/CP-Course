#include<bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq = {1, 2, 3};

    // Function: push_back
    dq.push_back(4);

    // Function: push_front
    dq.push_front(0);

    // Function: pop_back
    dq.pop_back();

    // Function: pop_front
    dq.pop_front();

    // Function: front
    cout << "Front element of the deque: " << dq.front() << '\n'; // Output: 1

    // Function: back
    cout << "Back element of the deque: " << dq.back() << '\n'; // Output: 3

    // Function: size
    cout << "Size of the deque: " << dq.size() << '\n'; // Output: 3

    // Function: empty
    cout << "Is the deque empty? " << (dq.empty() ? "Yes" : "No") << '\n'; // Output: No

    // Function: clear
    dq.clear();

    // Function: []
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    cout << "Element at index 2: " << dq[2] << '\n'; // Output: 3

    reverse(dq.begin(), dq.end());
    for (int x: dq) {
        cout << x << ' '; // Output: 3 2 1
    }

    return 0;
}
