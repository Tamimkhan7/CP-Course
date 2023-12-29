#include <bits/stdc++.h>
using namespace std;

int main()
{
  //  cout<<CLOCKS_PER_SEC<<'\n';
    clock_t first = clock();
    for (int i = 1; i <= 10; i++)
    {
        cout << i << '\n';
        this_thread::sleep_for(chrono::seconds(1)); // sleep for 1 second

    }
    clock_t en = clock();
    cout<<first-en<<'\n';
    return 0;
}
