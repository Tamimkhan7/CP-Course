#include <bits/stdc++.h>
using namespace std;
int main()
{
    //bitset basically decimal oh declare kora jay and string oh declare kora ja
    bitset<10>bs(10);//10==0000001010
    cout<<bs<<'\n';//10 ar binary bit
    cout<<bs.flip()<<'\n';//bit gula flip kora jay, on thakle off hoye jabe, off thakle on hoye jabe
    cout<<bs.count()<<'\n';//number of total set bit


    cout<<bs.size()<<'\n';//total bit ar size print

    cout<<bs.to_ullong()<<'\n';//value ta decimal a koto oita print korbe

    string s =bs.to_string();
    cout<<s<<'\n';//bit set ar value ta string a convert kora jay

    cout<<bs.any()<<'\n';//check if any bit is set, jodi akta bit oh set thake tahole true return korbe mane 1 dibe otherwise 0 print korbe
    cout<<bs.none()<<'\n';//if all bit is set then print the value of 0, otherwise print 1
}
