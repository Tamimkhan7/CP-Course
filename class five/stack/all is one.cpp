#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    // Function: push
    st.push(20);

    // Function: pop
    st.pop();

    // Function: top
    cout << "Top element of the stack: " << st.top() << '\n'; // Output: "Top element of the stack: 3"

    // Function: size
    cout << "Size of the stack: " << st.size() << '\n'; // Output: "Size of the stack: 3"

    // Function: empty
    cout << "Is the stack empty? " << (st.empty() ? "Yes" : "No") << '\n'; // Output: "Is the stack empty? No"

    // Function: swap
    stack<int> st2;
    st2.push(10);
    st2.push(20);
    st2.push(30);
    st.swap(st2);

    // Print the stack elements from top to bottom
    cout << "Stack elements from top to bottom: ";
    while (!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }
    cout << '\n'; // Output: "Stack elements from top to bottom: 30 20 10 "

    cout << st.size() << '\n'; // Output: 0

    return 0;
}
