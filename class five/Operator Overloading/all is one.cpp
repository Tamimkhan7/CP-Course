#include <bits/stdc++.h>
using namespace std;

struct Vector
{
    int x, y;
    Vector() { x = y = 0; }              // default constructor
    Vector(int x, int y) : x(x), y(y) {} // parameterized constructor
    Vector operator+(const Vector &v) const
    { // the second const makes sure that the function doesn't change the value of the main vector object
        return Vector(x + v.x, y + v.y);
    }
    Vector operator-(const Vector &v) const
    {
        return Vector(x - v.x, y - v.y);
    }
    Vector operator*(int k) const
    {
        return Vector(x * k, y * k);
    }
    int operator*(const Vector &v) const
    { // dot product
        return x * v.x + y * v.y;
    }
    bool operator==(const Vector &v) const
    {
        return x == v.x && y == v.y;
    }
    bool operator<(const Vector &v) const
    {
        return x < v.x || (x == v.x && y < v.y);
    }
    bool operator>(const Vector &v) const
    {
        return x > v.x || (x == v.x && y > v.y);
    }
    double length() const
    { // length of the vector
        return sqrt(x * x + y * y);
    }
    void print() const
    {
        cout << "Vector = " << x << ' ' << y << '\n';
    }
};
ostream &operator<<(ostream &os, const Vector &v)
{ // same as print function, but this time we are overloading the << operator
    os << "Vector = " << v.x << ' ' << v.y << '\n';
    return os;
}

int main()
{
    Vector v1(3, 4);
    Vector v2(5, 6);

    // Using the + operator
    Vector sum = v1 + v2;
    cout << sum; // Output: Vector = 8 10

    // Using the - operator
    Vector diff = v1 - v2;
    cout << diff; // Output: Vector = -2 -2

    // Using the * operator with a scalar
    Vector prod = v1 * 2;
    cout << prod; // Output: Vector = 6 8

    // Using the * operator for dot product
    int dotProd = v1 * v2;
    cout << "Dot Product = " << dotProd << '\n'; // Output: Dot Product = 39

    // Using the == operator
    bool isEqual = v1 == v2;
    cout << "Vectors are equal: " << boolalpha << isEqual << '\n'; // Output: Vectors are equal: false

    // Using the < operator
    bool isLess = v1 < v2;
    cout << "v1 is less than v2: " << boolalpha << isLess << '\n'; // Output: v1 is less than v2: true

    // Using the > operator
    bool isGreater = v1 > v2;
    cout << "v1 is greater than v2: " << boolalpha << isGreater << '\n'; // Output: v1 is greater than v2: false

    // Using the length method
    double len = v1.length();
    cout << "Length of v1 = " << len << '\n'; // Output: Length of v1 = 5

    // Using the print method
    v1.print(); // Output: Vector = 3 4

    vector<Vector> v;
    v.push_back(Vector(5, 2));
    v.push_back(Vector(3, 4));
    v.push_back(Vector(1, 6));
    sort(v.begin(), v.end()); // we have overloaded the < operator, so we can use sort function
    for (auto x : v)
    {
        cout << x;
    }

    return 0;
}
