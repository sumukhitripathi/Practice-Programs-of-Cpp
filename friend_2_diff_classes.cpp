//Program to find largest of two numbers in two different classes using friend function
#include<iostream>
using namespace std;

class add{
    int n1, n2;
    public:
    void getdata(){
        cout<<"Enter two numbers: ";
        cin>>n1>>n2;
    }
    friend float sum(add a);
};

float sum(add a){
    return (a.n1+a.n2);
}

int main(){
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Program to find sum of two numbers using friend function: "<<endl;
    add a;
    a.getdata();
    cout<<"Sum of two numbers is: "<<sum(a)<<endl;
    return 0;
}