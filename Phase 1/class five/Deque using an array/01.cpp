#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;

struct Deque
{
    int a[2 * N];
    int start = N, end = N - 1;

    void push_front(int x)   // O(1)
    {
        a[--start] = x;
    }
    void push_back(int x)   // O(1)
    {
        a[++end] = x;
    }
    void pop_front()   // O(1)
    {
        if (start > end)
        {
            cout << "The deque is empty! Can't pop from the front!\n";
            return;
        }
        start++;
    }
    void pop_back()   // O(1)
    {
        if (start > end)
        {
            cout << "The deque is empty! Can't pop from the back!\n";
            return;
        }
        end--;
    }
    int front()   // O(1)
    {
        if (start > end)
        {
            cout << "The deque is empty! Can't get the front element!\n";
            return 0;
        }
        return a[start];
    }
    int back()   // O(1)
    {
        if (start > end)
        {
            cout << "The deque is empty! Can't get the back element!\n";
            return 0;
        }
        return a[end];
    }
    int size()   // O(1)
    {
        return end - start + 1;
    }
    bool empty()   // O(1)
    {
        return start > end;
    }
};

int32_t main()
{
    Deque dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_back(40);
    cout << dq.front() << '\n'; // Output: 20
    cout << dq.back() << '\n'; // Output: 40
    dq.pop_front();
    cout << dq.front() << '\n'; // Output: 10
    cout << dq.back() << '\n'; // Output: 40
    dq.pop_back();
    cout << dq.front() << '\n'; // Output: 10
    cout << dq.back() << '\n'; // Output: 30
    dq.pop_front();
    cout << dq.front() << '\n'; // Output: 30
    cout << dq.back() << '\n'; // Output: 30
    dq.pop_back();
    cout << dq.front() << '\n'; // Output: The deque is empty! Can't get the front element!
    cout << dq.back() << '\n'; // Output: The deque is empty! Can't get the back element!
    dq.pop_front(); // Output: The deque is empty! Can't pop from the front!
    dq.pop_back(); // Output: The deque is empty! Can't pop from the back!
    return 0;
}
