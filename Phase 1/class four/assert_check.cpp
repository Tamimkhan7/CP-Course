#include <bits/stdc++.h>
using namespace std;

int divide(int a, int b)
{

    //jodi assert false pay then next ar kaj korbe na
    assert(b != 0); // If b is 0, then the program will terminate with a runtime error
    return a / b;
}

int main()
{
    int n;
    cin >> n;
    //arrsert mane holo akta value ba akta condition thik ace kina oita check korar jonno use kora hoy,
    //ai khane check kora hoice n ar value 1 ar ceye boro kina or soman kina and n ar value 100 ar ceye kom ba soman kina aita jodi true hoy then amare code execute kora jonno samne
    assert(n >= 1 && n <= 100); // If n is not in the range [1, 100], then the program will terminate with a runtime error
    cout << n << '\n';
    cout << divide(10, 2) << '\n';
    cout << divide(10, 0) << '\n'; // This will give a runtime error
    return 0;
}
