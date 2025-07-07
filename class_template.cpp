#include <iostream>
using namespace std;
template <typename T>
class Max {
    private:
    T x, y;
    public:
    Max(T a, T b) : x(a), y(b) {
        cout << "Constructor called: " << x << " and " << y << endl;
    }
    T maxnum() {
        return (x > y) ? x : y;
    }
    ~Max() {
        cout << "Destructor called for: " << x << " and " << y << endl;
    }
};
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    Max<int> intNum(a, b);
    cout << "Bigger number is: " << intNum.maxnum() << endl;
    float x, y;
    cout << "Enter two floats: ";
    cin >> x >> y;
    Max<float> floatNum(x, y);
    cout << "Bigger number is: " << floatNum.maxnum() << endl;
    return 0;
}