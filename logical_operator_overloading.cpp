#include <iostream>
using namespace std;

class Overload {
    int a, b, c;

public:
    void getData(int x, int y, int z);
    void displayData() const;
    bool operator<(const Overload& other) const; 
    bool operator>(const Overload& other) const;  
};

void Overload::getData(int x, int y, int z) {
    a = x;
    b = y;
    c = z;
}

void Overload::displayData() const {
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
    cout << "Value of c is " << c << endl;
}

bool Overload::operator<(const Overload& other) const {
    return (a + b + c) < (other.a + other.b + other.c);
}

bool Overload::operator>(const Overload& other) const {
    return (a + b + c) > (other.a + other.b + other.c);
}

int main() {
    cout << "Program by SUMUKHI_TRIPATHI_174_CSE_23" << endl;
    cout << "Program to overload < and > operators" << endl;

    Overload obj1, obj2;
    obj1.getData(7, 8, 9);
    obj2.getData(4,5,6); 

    cout << "Values of object 1:" << endl;
    obj1.displayData();

    cout << "Values of object 2:" << endl;
    obj2.displayData();
    if (obj1 < obj2) {
        cout << "Object 1 is less than Object 2" << endl;
    } else {
        cout << "Object 1 is not less than Object 2" << endl;
    }

    if (obj1 > obj2) {
        cout << "Object 1 is greater than Object 2" << endl;
    } else {
        cout << "Object 1 is not greater than Object 2" << endl;
    }

    return 0;
}