#include <bits/stdc++.h>
using namespace std;
void mul(int *n)
{
    //kintu reference diye na pathaile value address change hoye jay, tokhn functin ar modde value change korle main functin ar value chage hoy na
    cout<<n<<'\n';//value reference diye pathaile value address kono change hoy na
    *n = (*n)*10;//n address akare cilo, but ami address ke bad kore value kore niyeci
}

int main()
{
    int n;
    cin>>n;
    cout<<&n<<'\n';
    mul(&n);
    cout<<n<<'\n';
}
