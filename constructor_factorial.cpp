//Program to find factorial of a no. using constructor
#include<iostream>
using namespace std;
class factorial{
    int n, fact;
    public:
    factorial(){
        fact=1;
    }
    void getdata(){
        cout<<"Enter number upto which factorial needs to be evaluated: ";
        cin>>n;
        displaydata();
    }
    void displaydata(){
        for (int i=1; i<=n; i++){
            fact=fact*i;
        }
        cout<<endl<<"Fatorial: "<<fact<<endl;
    }
};

int main(){
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Program to find factorial of a no. using constructor"<<endl;
    factorial fc;
    fc.getdata();
    return 0;
}