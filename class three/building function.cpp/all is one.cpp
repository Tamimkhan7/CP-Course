#include<bits/stdc++.h>
using namespace std;

int main() {
  // abs
  int num_1 = -10;
  int abs_result = abs(num_1);
  cout << "Absolute value of " << num_1 << " is: " << abs_result << '\n';

  // ceil, floor, round, llround
  double num_2 = 3.7;
  double ceil_result = ceil(num_2);
  double floor_result = floor(num_2);
  double round_result = round(num_2);
  long long llround_result = llround(num_2);
  cout << "Ceil value of " << num_2 << " is: " << ceil_result << '\n';
  cout << "Floor value of " << num_2 << " is: " << floor_result << '\n';
  cout << "Round value of " << num_2 << " is: " << round_result << '\n';
  cout << "Long long rounded value of " << num_2 << " is: " << llround_result << '\n';

  // log, log2, log10
  double num_3 = 1000.0;
  double log_result = log(num_3);
  double log2_result = log2(num_3);
  double log10_result = log10(num_3);
  cout << "Natural logarithm of " << num_3 << " is: " << log_result << '\n';
  cout << "Base-2 logarithm of " << num_3 << " is: " << log2_result << '\n';
  cout << "Base-10 logarithm of " << num_3 << " is: " << log10_result << '\n';

  // sqrt, cbrt, pow
  double num_4 = 16.0;
  double sqrt_result = sqrt(num_4);
  double cbrt_result = cbrt(num_4);
  double pow_result = pow(num_4, 2);
  cout << "Square root of " << num_4 << " is: " << sqrt_result << '\n';
  cout << "Cube root of " << num_4 << " is: " << cbrt_result << '\n';
  cout << num_4 << " raised to the power of 2 is: " << pow_result << '\n';

  // stoi, stoll, to_string
  char s[] = "12345";
  int stoi_result = stoi(s);
  long long stoll_result = stoll(s);
  cout << "String to integer conversion: " << stoi_result << '\n';
  cout << "String to long long conversion: " << stoll_result << '\n';
  cout << "Integer to string conversion: " << to_string(stoi_result) << '\n';

  // cerr, cout
  cerr << "This is an error message" << '\n';
  cout << "This is a regular output" << '\n';

  // isalpha, isdigit, islower, isupper, tolower, toupper
  char ch = 'A';
  bool is_alpha_result = isalpha(ch);
  bool is_digit_result = isdigit(ch);
  bool is_lower_result = islower(ch);
  bool is_upper_result = isupper(ch);
  char to_lower_result = tolower(ch);
  char to_upper_result = toupper(ch);
  cout << "Is " << ch << " an alphabet? " << is_alpha_result << '\n';
  cout << "Is " << ch << " a digit? " << is_digit_result << '\n';
  cout << "Is " << ch << " in lowercase? " << is_lower_result << '\n';
  cout << "Is " << ch << " in uppercase? " << is_upper_result << '\n';
  cout << "Lowercase conversion of " << ch << " is: " << to_lower_result << '\n';
  cout << "Uppercase conversion of " << ch << " is: " << to_upper_result << '\n';

  // swap
  int num_5 = 10;
  int num_6 = 20;
  cout << "Before swapping: num_5 = " << num_5 << ", num_6 = " << num_6 << '\n';
  swap(num_5, num_6);
  cout << "After swapping: num_5 = " << num_5 << ", num_6 = " << num_6 << '\n';

  // gcd
  int num_7 = 36;
  int num_8 = 48;
  int gcd_result = __gcd(num_7, num_8);
  cout << "GCD of " << num_7 << " and " << num_8 << " is: " << gcd_result << '\n';

  // rand
  srand(time(0)); // Seed the random number generator
  int random_num = rand();
  cout << "Random number: " << random_num << '\n';

  // reverse
  char reverse_str[] = "Hello, World!";
  int len = strlen(reverse_str);
  reverse(reverse_str, reverse_str + len);
  cout << "Reversed string: " << reverse_str << '\n';

  // sort, is_sorted
  int a[] = {5, 2, 3, 1, 9};
  int n = 5;
  sort(a, a + n);
  bool is_array_sorted = is_sorted(a, a + n);
  cout << "Sorted numbers: ";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << '\n';
  cout << "Is the array sorted? " << is_array_sorted << '\n';
  return 0;
}
