#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    s = "Helloworld";
// s.erase(2);aita holo 2 index ar baki character gula deleted hoye jabe
    s.erase(2,6);//ar aita holo 2 theke 6 projnto all character deleted hoye jabe
        cout<<s<<'\n';

}

/*
#include <iostream>
#include <string>

int main ()
{
  std::string str ("This is an example sentence.");
  std::cout << str << '\n';
                                           // "This is an example sentence."
  str.erase (10,8);                        //            ^^^^^^^^
  std::cout << str << '\n';
                                           // "This is an sentence."
  str.erase (str.begin()+9);               //           ^
  std::cout << str << '\n';
                                           // "This is a sentence."
  str.erase (str.begin()+5, str.end()-9);  //       ^^^^^
  std::cout << str << '\n';
                                           // "This sentence."
  return 0;
}
*/
