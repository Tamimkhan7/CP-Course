#include <bits/stdc++.h>
using namespace std;
//data segments
//value jodi public declare kori tahole aito somossa kore na
const int STACK_SIZE = 8176000; // 8176 * 1000 converted into bytes (IN MY COMPUTER)
const int N = (STACK_SIZE / 4) * 2; // This works in my computer as we are declaring it globally
int b[N];
int main() {
  int n = (STACK_SIZE / 4); // This will not give segmentation fault (IN MY COMPUTER)
  // int n = (STACK_SIZE / 4) * 2; // This will give segmentation fault (IN MY COMPUTER)
  int a[n]; // Declaring an array of size n, its size is n * 4 = (STACK_SIZE / 4) * 4 = STACK_SIZE bytes

  //stack segmentation //jodi private declare kori tahole somossa dekhay
  for (int i = 0; i < n; i++) {
    a[i] = i;
  }
  cout << a[0] << '\n';
  return 0;
}
//if i am saw segmentation fault in my pc,, then we will remove all private declaration
//using all publicly
