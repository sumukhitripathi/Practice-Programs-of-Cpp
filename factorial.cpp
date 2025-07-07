#include<iostream>
using namespace std;
int factorial(int n);
int main() {
    int n;
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"PRogram to print factorial of a positive integer"<<endl;
    cout << "Enter a positive integer: "<<endl;
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n);
    return 0;
}

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}