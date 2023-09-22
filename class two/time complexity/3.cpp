#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    // ai ta O(root(n)) time complexity lagbe karon holo
    // i*i=n//i^2=n//i = root(n)//root projnto tar time complexity hobe karon amra bujte parteci je aita kivabe kaj kortece
    // amra jodi deki 100= root value holo 10, ar 1000 = root value holo just 32 time, tai bola jay aita log n ar ceye first kaj kore

    for (int i = 1; i * i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}