#include <bits/stdc++.h>
using namespace std;

void fun(int n) {
  if (n == 0) {
    return;
  }
  fun(n - 1);
}

int main() {
  int n = 1e8; // try with n = 1e3, 1e8
  fun(n);
  return 0;
}
