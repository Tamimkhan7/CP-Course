#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];

    //permutation basically hoy n! time, n ta valuer permutation hobe n! times
//next_permutation//aita building function//porer joto permutation ace sokol permutation print kore//permutation basically hoy lexicographically
//prev_permutation//aita building function//ager joto permutation ace sokol permutation print kore//permutation basically hoy lexicographically
    //best holo,, do while loop use kora, tobe arek vabe kora jay,,, just while diye use kora jay
    int ans=0;

    //permutation korar jonno better hoy value ta sort kore neoya
    //tahole maximum time permutation dibe,, na hole lexicographically joto bar ase toto bar ai permutatioin korbe
    sort(a, a+n, greater<int>());
    do
    {
        ans++;
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    while(prev_permutation(a, a+n));
    cout<<ans<<endl;
}
