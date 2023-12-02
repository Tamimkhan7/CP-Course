#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x=10;
    int &y = x;
    cout<<&x<<'\n'<<&y<<'\n';// same value represent kore

    y +=3;//all reference value change able that why all reference value changed
    cout<<x<<'\n'<<y<<'\n';// same value represent kore

    x +=3;//all reference value change able that why all reference value changed
    cout<<x<<'\n'<<y<<'\n';// same value represent kore
}
