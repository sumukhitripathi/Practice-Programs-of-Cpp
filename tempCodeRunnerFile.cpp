#include <iostream>
#include<math.h>
using namespace std;
template <typename T>
T square(T data) {
    return pow(data,2);
}
int main() {
    int intdata;
    float floatdata;
    double doubledata;
    cout<<"Enter integer value: ";
    cin>>intdata;
    cout << "Square of " << intdata << " is: " << square(intdata) << endl;
    cout<<"Enter float value: ";
    cin>>floatdata;
    cout << "Square of " << floatdata << " is: " << square(floatdata) << endl;
    cout<<"Enter double data: ";
    cin>>doubledata;
    cout << "Square of " << doubledata << " is: " << square(doubledata) << endl;
    return 0;
}