#include <bits/stdc++.h>
using namespace std;

int main() {
	// Declaration
	pair<int, double> p1;

	// Initialization using make_pair
	pair<int, double> p2 = make_pair(1, 2.5);

	// Accessing elements
	cout << "p2.first: " << p2.first << ", p2.second: " << p2.second << '\n';

	// Swapping two pairs
	pair<int, double> p3 = make_pair(42, 3.14);
	swap(p2, p3);
	cout << "After swapping: p2.first: " << p2.first << ", p2.second: " << p2.second << '\n';
	cout << "After swapping: p3.first: " << p3.first << ", p3.second: " << p3.second << '\n';

	// Array of pairs
	pair<int, int>points[10];
	points[0] = make_pair(10, 20);
	points[1] = make_pair(30, 40);
	points[2] = make_pair(50, 60);

	// Pair of pairs
	pair<pair<int, int>, int> x = make_pair(make_pair(0, 1), 2);//{{0, 1}, 2};value ai vabe oh initilize kora jay
	cout << "x.first.first: " << x.first.first << ", x.first.second: " << x.first.second << ", x.second: " << x.second << '\n';

	// Structured binding (C++17 or above)
  p1 = make_pair(10, 20);
	auto [first_element, second_element] = p1;
	cout << "p1.first: " << first_element << ", p1.second: " << second_element << '\n';

	// Using tie to access the elements of a pair
	int x_val; double y_val;
	tie(x_val, y_val) = p2;
	cout << "x_val: " << x_val << ", y_val: " << y_val << '\n';

	return 0;
}
