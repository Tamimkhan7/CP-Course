#include <bits/stdc++.h>
using namespace std;

const int STACK_SIZE = 8176000; // 8176 * 1000 bytes (IN MY COMPUTER)
const int N = (STACK_SIZE / 4) * 2; // This works in my computer as we are declaring it globally
int b[N];
int main() {
  int n = (STACK_SIZE / 4); // This will not give segmentation fault (IN MY COMPUTER)
  // int n = (STACK_SIZE / 4) * 2; // This will give segmentation fault (IN MY COMPUTER)
  int a[n]; // Declaring an array of size n, its size is n * 4 = (STACK_SIZE / 4) * 4 = STACK_SIZE bytes
  for (int i = 0; i < n; i++) {
    a[i] = i;
  }
  cout << a[0] << '\n';
  return 0;
}
