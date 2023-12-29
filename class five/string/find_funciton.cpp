#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Helloworld";
    int pos = s.find('o');//return the first position of the character
    cout<<pos<<'\n';

    int ps = s.find("llo");//return the first position of the substring
    cout<<ps<<'\n';
    int px = s.rfind('d');//return the last position of the character//basically ulta dik theke gure ase jeita first pabe oi character ta nibe and oitaii tar first occurance
    cout<<px<<'\n';

}
