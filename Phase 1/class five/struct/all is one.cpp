#include<bits/stdc++.h>
using namespace std;

struct Address {
    string city;
    int house_num;
    int zip_code;
//functional default constructor
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
//print the value of s1 object
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
