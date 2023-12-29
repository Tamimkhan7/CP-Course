#include <bits/stdc++.h>
using namespace std;

int main ()
{
    //lower and upper bound sob stl ace but element gula sorted hote hobe
    set<int> myset;
    for (int i=1; i<10; i++) myset.insert(i*10); // 10 20 30 40 50 60 70 80 90
//lower and upper bound howar jonno must be element gula sorted thakte hobe
//ar jei sekkhe set always sorted thake tahole set always lower and upper bound exits korbe
    auto itlow=myset.lower_bound (30);                //       ^
    auto itup=myset.upper_bound (60);//ai gula sob return korbe iterator but index na                 //                   ^

    myset.erase(itlow,itup); //lower bound inclusive and upper bound exclusive                    // 10 20 70 80 90

    cout << "myset contains:";
    for(auto x : myset)cout<<x<< ' ';
    cout << '\n';

    return 0;
}
