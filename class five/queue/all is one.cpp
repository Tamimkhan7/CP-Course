#include <bits/stdc++.h>
using namespace std;
//queue basically FIFO--first in first out
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);

    // Function: push
    q.push(3);

    // Function: pop
    q.pop();

    // Function: front
    cout << "Front element of the queue: " << q.front() << '\n'; // Output: "Front element of the queue: 2"

    // Function: back
    cout << "Back element of the queue: " << q.back() << '\n';   // Output: "Back element of the queue: 3"

    // Function: size
    cout << "Size of the queue: " << q.size() << '\n';           // Output: "Size of the queue: 2"

    // Function: empty
    cout << "Is the queue empty? " << (q.empty() ? "Yes" : "No") << '\n'; // Output: "Is the queue empty? No"

    // Function: swap
    queue<int> q2;
    q2.push(10);
    q2.push(20);
    q2.push(30);
    q.swap(q2);

    // Print the queue elements from front to back
    cout << "Queue elements from front to back: ";
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << '\n'; // Output: "Queue elements from front to back: 10 20 30"
    cout << q.size() << '\n'; // Output: 0
    return 0;
}
