#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   s = "Helloworld";
   //substring holo contiguous string character
   string xx = s.substr(2,5);//mane holo string ar 2nd position theke 5 ta character  nibe
   cout<<xx<<'\n';
   string sp = s.substr(2);//mane holo string ar 2 theke baki sob character niye akta substring make korbo
   cout<<sp<<'\n';
}
