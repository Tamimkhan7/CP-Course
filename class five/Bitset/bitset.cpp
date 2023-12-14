#include <bits/stdc++.h>
using namespace std;
int main()
{
    //size joto dibo toto bit niye kaj korbe,, size a baki index 0 diye append kore dibe

    //bitset basically decimal oh declare kora jay and string oh declare kora ja
    bitset<16>bs("10011111"), xx("0110110100");
    cout<<bs<<'\n';

    cout<<bs.none()<<'\n';// all bit is unset then print of the value is 1, otherwise print is 0
    cout<<bs.all()<<'\n';//if all bit is set then print of the value is 1, otherwise print is 0
    auto x = bs>>1;//ak ghor dane niye niye geci all bit ke, ar last bit a 0 append hoye gece
    cout<<x<<'\n';
    auto y = bs<<2;//two ghor bane niye geci all bit ke, and dane last two ta bit 0 diye append hoye gece
    cout<<y<<'\n';

    auto or_ans = bs|xx;//two ta bit ke OR kore deoya jay
    cout<<or_ans<<'\n';

    auto and_ans = bs&xx;//two ta bit ke AND kore deoya jay
    cout<<and_ans<<'\n';

    auto xor_ans = bs^xx;//two ta bit ke XOR kore deoya jay
    cout<<xor_ans<<'\n';

    auto not_ans = (~bs);//bit ke NOR kore deoya jay
    cout<<not_ans<<'\n';

}
