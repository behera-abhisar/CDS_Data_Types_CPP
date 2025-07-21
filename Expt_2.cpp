// Finding the size of different data types in CPP
// Abhisar Behera
// 24070123002
// Experiment 02

#include <iostream>
#include <string>

using namespace std;

int main() {
    int a;
    float b;
    double c;
    char d;
    string e;
    bool f;

    cout << "Enter an integer, a float, a double, a char, a string, and a bool (separated by space): ";
    cin >> a >> b >> c >> d >> e >> f;

    cout << endl;

    cout << "Integer is " << a << " and the size of it is " << sizeof(a) << " bytes" << endl;
    cout << "Float is " << b << " and the size of it is " << sizeof(b) << " bytes" << endl;
    cout << "Double is " << c << " and the size of it is " << sizeof(c) << " bytes" << endl;
    cout << "Character is " << d << " and the size of it is " << sizeof(d) << " byte" << endl;
    cout << "String is " << e << " and the size of it is " << sizeof(e) << " bytes" << endl;
    cout << "Boolean is " << f << " and the size of it is " << sizeof(f) << " byte" << endl;

    return 0;
}

/* Output

Enter an integer, a float, a double, a char, a string, and a bool (separated by space): 2 3.14 5.12345678 A HelloWorld 1   

Integer is 2 and the size of it is 4 bytes
Float is 3.14 and the size of it is 4 bytes
Double is 5.12346 and the size of it is 8 bytes
Character is A and the size of it is 1 byte
String is HelloWorld and the size of it is 32 bytes
Boolean is 1 and the size of it is 1 byte

*/
