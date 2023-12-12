#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(4);
    pq.push(1);
    pq.push(3);
    pq.push(2);

    // Function: push
    pq.push(5); // pq: 5 4 3 2 1

    // Function: pop
    pq.pop(); // 5 will get popped as it is the highest number

    // Function: top
    cout << "Top element of the priority queue: " << pq.top() << '\n'; // Output: "Top element of the priority queue: 4"

    // Function: size
    cout << "Size of the priority queue: " << pq.size() << '\n'; // Output: "Size of the priority queue: 4"

    // Function: empty
    cout << "Is the priority queue empty? " << (pq.empty() ? "Yes" : "No") << '\n'; // Output: "Is the priority queue empty? No"

    // Function: swap
    priority_queue<int> pq2;
    pq2.push(3);
    pq2.push(6);
    pq2.push(0);
    pq.swap(pq2);

    // Print the priority queue elements from top to bottom
    cout << "Priority queue elements from top to bottom: ";
    while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
    cout << '\n'; // Output: "Priority queue elements from top to bottom: 6 3 0 "

    cout << "Size of the priority queue: " << pq.size() << '\n'; // Output: "Size of the priority queue: 0"


    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(4);
    minHeap.push(1);
    minHeap.push(3);
    minHeap.push(2);
    cout << "Priority queue elements from top to bottom: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << ' ';
        minHeap.pop();
    } // Output: 1 2 3 4
    return 0;
}
