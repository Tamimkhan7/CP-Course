#include <bits/stdc++.h>
using namespace std;

int main() {
  char str[10];
  memset(str, 'a', 5); // assign 'a' to first 5 bytes of str, as char is 1 byte, so first 5 elements of str will be 'a'
  str[5] = '\0'; // null character
  cout << str << '\n'; // str = aaaaa
  memset(str, 'a', sizeof(str)); // assign 'a' to all bytes of str (10 bytes)
  str[9] = '\0'; // we need to put null character at the end
  cout << str << '\n'; // str = aaaaaaaaa

  int n = 10;
  int a[n];
  int x = 29;
  memset(a, x, sizeof(a));
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' '; // all 488447261
  }
  cout << '\n';
  cout << bitset<32>(x) << "\n\n"; // ...00011101
  for (int i = 0; i < n; i++) {
    cout << (bitset<32>(a[i])) << '\n'; // 00011101 00011101 00011101 00011101
  }

  memset(a, 0, sizeof a); // 0 = 00000000 00000000 00000000 00000000
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' '; // all 0s
  }
  cout << '\n';

  memset(a, -1, sizeof a); // -1 = 11111111 11111111 11111111 11111111
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' '; // all -1s
  }
  cout << '\n';
  return 0;
}
