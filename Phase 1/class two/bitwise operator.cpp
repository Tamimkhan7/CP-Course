#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 1, b = 5;         // always value gula binary te represent hoy, ta 32 bit a
    cout << (a ^ b) << endl;  // that's means xor operator, value always bracket use korte hobe
    cout << (3 | 4) << endl;  // or operator use korteci
    cout << (2 & 6) << endl;  // and operator use korteci
    cout << (~10) << endl;    // not operator use korteci
    int p = 2;                // amra jodi ai value take left shift kori tahole tar binary form ta ak gor left a cole jabe and ta binary te represent hobe
    cout << (p << 1) << endl; // 2 te akbar left shift korle tar value hoy 4, ja value *2 means kore, vlue ke 2 dara gun kore pawa jay
    cout << (p << 4) << endl; // 4 bar left shift koreci//formula holo = x*2^k
    // like 2 ar binary holo-0010-ja 32 bit binary form represent kre
    // ak gor left a nile hobe 0100 ta hoye ja 4

    // two ar power ber kora je kono value te, like 20 ar 2 ar value ber korbo
    int x = 1 << 20;
    cout << x << endl; // tahole kintu 20 ar 2 power beriye asce
    // akhn kotha holo ai value ta jod ami 32 ar upore niye jai tahole to ar kaj korbe na se khette ki kaj korbe
    // tokhn kaj korbe ja amake type cast korte hobe long long ta opther kono data type diye
    // cout << (1 << 40) << endl; // still aita akhn kaj korbe na
    cout << (long long)1 << 40 << endl; // tokkhn kintu value ta kaj kortece
}