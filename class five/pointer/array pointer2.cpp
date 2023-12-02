#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {10,20,30,40,50};
    for(int i=0; i<5; i++)
    {
        cout<<&a[i]<<'\n';//jehetu array 4 byte tai array block gula 4 kore update hocce
    }
//normally total array declear korle se tar first value ta indecate kore pointer ar jonno
//size decleare kore value re indicate kora jay
    int *ptr = a;//array address na dile oh auto address hoye thake
    cout<<'\n';
    cout<<ptr<<'\n';
   // ptr = ptr+3;//similar way we are using,, like
   // ptr++;//if we are want our value update then we can use this
   // cout<<*ptr<<'\n';


   // cout<<*(ptr+2)<<'\n';ai vabe oh value update kora jay
   cout<<a[0]+2<<'\n';


   ptr = ptr+1;
   cout<<*ptr<<'\n';

   *ptr = *ptr+1;//first a value ke represent kortece then value ta 1 bariye dilam then oi value ta ptr a address hisabe pathlam then oi address ar value ta print korteci

   cout<<*ptr<<'\n';
}
