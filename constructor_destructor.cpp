//Program to show use of constructor and destructor
#include<iostream>
using namespace std;

class test{
    public:
    test(){
        cout<<"\nCalling constructor"<<endl;
    }
    ~test(){
        cout<<"Calling destructor"<<endl;
    }
};

int main(){
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Program to show use of constructor and destructor"<<endl;
    test obj;
    cout<<"Calling main function"<<endl;
    return 0;
}