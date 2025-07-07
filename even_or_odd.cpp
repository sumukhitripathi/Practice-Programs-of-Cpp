//To find whether a number is even or odd
#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " is even.";
  else if (n%2!=0)
    cout << n << " is odd.";
  else
    cout<<"Invalid input";
  return 0;
}
