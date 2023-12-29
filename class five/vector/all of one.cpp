#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // begin
    vector<int>::iterator beginIt = v.begin();
    cout << "Iterator to the first element: " << *beginIt << '\n';

    // end
    vector<int>::iterator endIt = v.end();
    cout << "Iterator to the element after the last: " << *(endIt) << '\n';

    // rbegin
    vector<int>::reverse_iterator rbeginIt = v.rbegin();
    cout << "Iterator to the last element: " << *rbeginIt << '\n';

    // rend
    vector<int>::reverse_iterator rendIt = v.rend();
    cout << "Iterator to the element before the first: " << *(rendIt) << '\n';

    // --end
    cout << "Iterator to the last element using --end: " << *(--endIt) << '\n';

    // insert
    v.insert(v.begin() + 2, 10);
    cout << "Vector after insert(2, 10): ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << '\n';

    // erase
    v.erase(v.begin() + 2);
    cout << "Vector after erase(v.begin() + 2): ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << '\n';

    // erase (range)
    v.erase(v.begin(), v.begin() + 2);
    cout << "Vector after erase(v.begin(), v.begin() + 2): ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << '\n';

    // reverse
    reverse(v.begin(), v.end());
    cout << "Vector after reverse(v.begin(), v.end()): ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << '\n';

    // sort
    sort(v.begin(), v.end());
    cout << "Vector after sort(v.begin(), v.end()): ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << '\n';

    // sort (reverse)
    sort(v.rbegin(), v.rend());
    cout << "Vector after sort(v.rbegin(), v.rend()): ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << '\n';

    // swap
    vector<int> u = {6, 7, 8, 9, 10};
    swap(u, v);
    cout << "Vector u after swapping: ";
    for (int num : u) {
        cout << num << " ";
    }
    cout << '\n';

    // swap (member function)
    u.swap(v);
    cout << "Vector u after swapping using member function: ";
    for (int num : u) {
        cout << num << " ";
    }
    cout << '\n';

    // find
    auto it = find(v.begin(), v.end(), 3);
    cout << "Iterator to the first occurrence of 3: " << *it << '\n';

    it = find(v.begin(), v.end(), 10);
    if (it == v.end()) {
        cout << "Element 10 not found in the vector.\n";
    }

    v = vector<int>({2, 3, 1, 5, 3});
    // count
    int count_3 = count(v.begin(), v.end(), 3);
    cout << "Number of occurrences of 3: " << count_3 << '\n';

    // accumulate
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum of all elements: " << sum << '\n';

    sum = accumulate(v.begin(), v.end(), 5);
    cout << "Sum of all elements with initial value 5: " << sum << '\n';

    // min_element
    auto minIt = min_element(v.begin(), v.end());
    cout << "Iterator to the minimum element: " << *minIt << '\n';

    // *min_element
    int minElement = *min_element(v.begin(), v.end());
    cout << "Minimum element: " << minElement << '\n';

    // max_element
    auto maxIt = max_element(v.begin(), v.end());
    cout << "Iterator to the maximum element: " << *maxIt << '\n';

    // *max_element
    int maxElement = *max_element(v.begin(), v.end());
    cout << "Maximum element: " << maxElement << '\n';

    return 0;
}
