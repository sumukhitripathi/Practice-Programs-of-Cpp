#include <iostream>
#include <stdexcept>
using namespace std;
class Array {
private:
    int* arr;
    int size;
public:
    Array(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = i * 2;  
        }
    }
    ~Array() {
        delete[] arr;
    }
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return arr[index];
    }
    int getSize() const {
        return size;
    }
};
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    Array myArray(size);
    int index;
    cout << "Enter an index to access: ";
    cin >> index;
    try {
        cout << "Value at index " << index << ": " << myArray[index] << endl;
    } catch (const out_of_range& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}