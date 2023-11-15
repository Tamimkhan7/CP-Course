#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)cin>>a[i];
//next_permutation//aita building function//porer joto permutation ace sokol permutation print kore//permutation basically hoy lexicographically
//prev_permutation//aita building function//ager joto permutation ace sokol permutation print kore//permutation basically hoy lexicographically
    //best holo,, do while loop use kora, tobe arek vabe kora jay,,, just while diye use kora jay
    int ans=0;
    do
    {
        ans++;
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    while(next_permutation(a, a+n));
    cout<<ans<<endl;
}
