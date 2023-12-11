#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    // Insert an element at the end
    s.push_back('!');
    cout << "After push_back: " << s << endl; // Output: "Hello!"

    // Remove the last element
    s.pop_back();
    cout << "After pop_back: " << s << endl; // Output: "Hello"

    // Get the number of characters in the string
    cout << "Size: " << s.size() << endl; // Output: 5

    // Check if the string is empty
    cout << "Is empty: " << s.empty() << endl; // Output: 0 (false)

    // Remove all characters from the string
    s.clear();
    cout << "After clear: " << s << endl; // Output: ""

    // Assign a new value to the string
    s = "Hello";

    // Get the first character
    cout << "First character: " << s.front() << endl; // Output: "H"

    // Get the last character
    cout << "Last character: " << s.back() << endl; // Output: "o"

    // Get the character at a specific index
    cout << "Character at index 2: " << s.at(2) << endl; // Output: "l"

    // Get a substring from the string
    string sub1 = s.substr(2, 2);
    cout << "Substring (2, 2): " << sub1 << endl; // Output: "ll"

    string sub2 = s.substr(2);
    cout << "Substring (2 to end): " << sub2 << endl; // Output: "llo"

    // Find the first occurrence of a substring
    int pos1 = s.find("llo");
    cout << "Position of 'llo': " << pos1 << endl; // Output: 2

    // Find the first occurrence of a character
    int pos2 = s.find('l');
    cout << "Position of 'l': " << pos2 << endl; // Output: 2

    // Find the last occurrence of a substring
    int pos3 = s.rfind("l");
    cout << "Last position of 'l': " << pos3 << endl; // Output: 3

       // Append a string to the end
    s += " World";
    cout << "After appending: " << s << endl; // Output: "Hello World"

    // Concatenate two strings
    s = s + "!";
    cout << "After concatenation: " << s << endl; // Output: "Hello World!"

    // Reverse the string
    reverse(s.begin(), s.end());
    cout << "After reverse: " << s << endl; // Output: "!dlroW olleH"

    // Sort the string (according to ASCII values)
    sort(s.begin(), s.end());
    cout << "After sort: " << s << endl; // Output: " !HWdeillooor"

    return 0;
}
