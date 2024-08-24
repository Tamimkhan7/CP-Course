#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<10> bs("1111101001");
    bitset<10> p("0110110100");

    // Function: []
    cout << "bs[1]: " << bs[1] << '\n'; // Output: 0

    // Function: set
    bs.set(1);
    cout << "bs.set(1): " << bs << '\n'; // Output: 1111101011

    // Function: reset
    bs.reset(0);
    cout << "bs.reset(0): " << bs << '\n'; // Output: 1111101010

    // Function: flip
    bs.flip(0);
    cout << "bs.flip(0): " << bs << '\n'; // Output: 1111101011

    // Function: set
    bs.set();
    cout << "bs.set(): " << bs << '\n'; // Output: 1111111111

    // Function: reset
    bs.reset();
    cout << "bs.reset(): " << bs << '\n'; // Output: 0000000000

    bs = bitset<10>("1111101001");
    // Function: flip
    bs.flip();
    cout << "bs.flip(): " << bs << '\n'; // Output: 0000010110

    bs = bitset<10>("1111101001");
    // Function: count
    cout << "bs.count(): " << bs.count() << '\n'; // Output: 7

    // Function: size
    cout << "bs.size(): " << bs.size() << '\n'; // Output: 10

    // Function: to_ullong
    cout << "bs.to_ullong(): " << bs.to_ullong() << '\n'; // Output: 1001

    // Function: to_string
    cout << "bs.to_string(): " << bs.to_string() << '\n'; // Output: 1111101001

    // Function: any
    cout << "bs.any(): " << bs.any() << '\n'; // Output: 1 (true)

    // Function: none
    cout << "bs.none(): " << bs.none() << '\n'; // Output: 0 (false)

    // Function: all
    cout << "bs.all(): " << bs.all() << '\n'; // Output: 0 (false)

    // Function: <<
    bs = bs << 1;
    cout << "bs << 1: " << bs << '\n'; // Output: 1111010010

    bs = bitset<10>("1111101001");
    // Function: >>#include<bits/stdc++.h>
using namespace std;

struct Address {
    string city;
    int house_num;
    int zip_code;

    void details() {
        cout << "House " << house_num << ", " << city << ", " << zip_code << '\n';
    }

    Address() { // default constructor
        city = "Comilla";
        house_num = 100;
        zip_code = 2000;
    }

    Address(string _city, int _house_num, int _zip_code) { // parameterized constructor
        city = _city;
        house_num = _house_num;
        zip_code = _zip_code;
    }
};

struct Student {
    string name;
    int roll_number;
    vector<int> marks;
    Address address;
} a[5];

int main() {
    Student s1;
    s1.name = "Bapparaj";
    s1.roll_number = 101;
    s1.marks = {90, 85, 95, 78, 88};
    s1.address.city = "Dhaka";
    s1.address.house_num = 70;
    s1.address.zip_code = 1230;

    cout << "Student Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.roll_number << endl;
    cout << "Marks: ";
    for (int mark : s1.marks) {
        cout << mark << " ";
    }
    cout << endl;
    cout << "Address: House " << s1.address.house_num << ", " << s1.address.city << ", " << s1.address.zip_code << endl;

    a[0] = s1;
    a[1] = {"Joshim", 102, {80, 85, 75, 78, 88}};

    a[1].address.details();

    a[1].address = Address("Chittagong", 80, 2000);
    a[1].address.details();

    return 0;
}
    bs = bs >> 1;
    cout << "bs >> 1: " << bs << '\n'; // Output: 0111110100

    bs = bitset<10>("1111101001");
    // Function: &
    bs = bs & p;
    cout << "bs & p: " << bs << '\n'; // Output: 0110100000

    bs = bitset<10>("1111101001");
    // Function: ^
    bs = bs ^ p;
    cout << "bs ^ p: " << bs << '\n'; // Output: 1001011101

    bs = bitset<10>("1111101001");
    // Function: ~
    bs = ~bs;
    cout << "~bs: " << bs << '\n'; // Output: 0000010110

    return 0;
}
