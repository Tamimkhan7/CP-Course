#include <bits/stdc++.h>
using namespace std;

int main() {
  // Declaration
  tuple<int, double, char> t1;

  // Initialization using make_tuple
  tuple<int, double, char> t2 = make_tuple(42, 3.14, 'A');

  // Accessing elements
  cout << "get<0>(t2): " << get<0>(t2) << ", get<1>(t2): " << get<1>(t2) << ", get<2>(t2): " << get<2>(t2) << '\n';

  // Using structured binding (C++17 or above)
  t1 = make_tuple(10, 2.718, 'X');
  auto [first_element, second_element, third_element] = t1;
  cout << "get<0>(t1): " << first_element << ", get<1>(t1): " << second_element << ", get<2>(t1): " << third_element << '\n';

  // Using tie to access the elements of a tuple
  int x;
  double y;
  char z;
  tie(x, y, z) = t2;
  cout << "x: " << x << ", y: " << y << ", z: " << z << '\n';

  // tuples of pairs
  tuple<pair<int, int>, int, tuple<int, int>> t3 = make_tuple(make_pair(0, 1), 2, make_tuple(3, 4));
  cout << get<0>(t3).first << ' ' << get<0>(t3).second << ' ' << get<1>(t3) << ' ' << get<0>(get<2>(t3)) << ' ' << get<1>(get<2>(t3)) << '\n';
  return 0;
}
