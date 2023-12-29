#include <bits/stdc++.h>
using namespace std;
int print_bits(int x, int k)
{
    return ((x >> k) & 1); //>>aita right shift
}
// count korbo koyta bits on ace
int count_on_bits(int x)
{
    int ans = 0;
    for (int k = 0; k < 32; k++) // 32th ta holo sing operator
    {
        if (print_bits(x, k)) // ar kth bar amra right shift korteci
            ans++;
    }
    return ans;
}
// off bits check
int count_off_bits(int x)
{
    int ans = 0;
    for (int k = 0; k < 32; k++)
    {
        if (!print_bits(x, k)) // ak digit value return kortece like k=0 ar value first return
            ans++;
    }
    return ans;
}
int main()
{
    int x;
    cin >> x;
    // total koyta bit on ace tar count
    cout << count_on_bits(x) << endl; // like x=11, tahole holo - 000001010 total 32 bits, because amra int data type niyeci
                                      // total koyta bit off ace tar count
    cout << count_off_bits(x) << endl;
}