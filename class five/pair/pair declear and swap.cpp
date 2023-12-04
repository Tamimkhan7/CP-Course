#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, double>p,q;
    p= make_pair(5,2.5);//make_pair diye pair a value insert kore
    q = make_pair(4,2);
    cout<<p.first<<" "<<p.second<<'\n';//pair a must be two ta value thake first value first second value holo second,,,
    //pair a caile first value oh print kora jay
    //abar second value oh print kora jay
    cout<<p.first<<'\n';
    cout<<p.second<<'\n';

    //swap mainly integer ar moto
    swap(p,q);
   cout<<p.first<<" "<<p.second<<'\n';
    cout<<q.first<<" "<<q.second<<'\n';
}
