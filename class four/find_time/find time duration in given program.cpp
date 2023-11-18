#include <bits/stdc++.h>
using namespace std;

int main()
{
    clock_t strart= clock();
    cout<<CLOCKS_PER_SEC<<'\n';
    cout<<strart<<'\n';
    clock_t start, end; // To store clock ticks, clock tick is the smallest unit of time that can be measured by the clock
    start = clock(); // Start the clock
    int n = 500000000;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1LL * i * (n - i + 1);
    }
    end = clock(); // End the clock
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC; // Calculate the time taken, CLOCKS_PER_SEC is the number of clock ticks per second
    cout << "Time taken by program is : " << fixed << setprecision(5) << time_taken << " sec" << endl;
    return 0;
}
