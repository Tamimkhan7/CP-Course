#include <bits/stdc++.h>
using namespace std;
int main()
{
    //bitset basically decimal oh declare kora jay and string oh declare kora ja
    bitset<10>bs(10);//10==0000001010
    cout<<bs<<'\n';//10 ar binary bit
    cout<<bs[1]<<'\n';//1 index a ki ace ta dekha jay,, bit index count kore right theke
//randomly index dekha jay ki bit ace
//bit set kora jay je kono index,, set kora mane bit ta on kore deoya
    cout<<bs.set(5)<<'\n';//specific bit
    cout<<bs.set()<<'\n';//aita dile all bit set mane on hoye jabe

    cout<<bs.reset(3)<<'\n';//specific index ta off kore deoya
    cout<<bs.reset()<<'\n';//aita deoya mane all bit off hoye jawa
}
