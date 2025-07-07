//Program to find largest of two numbers in two different classes using friend function
#include<iostream>
using namespace std;
class B;
class A{
    int n1;
    public:
    void getdata(){
        cout<<"Enter the value of n1: ";
        cin>>n1;
    }
    friend void maxnumber(A& ,B&);
};

class B{
    int n2;
    public:
    void getdata(){
        cout<<"Enter the value of n2: ";
        cin>>n2;
    }
    friend void maxnumber(A& ,B&);
};

void maxnumber(A& a, B& b){
    if(a.n1>b.n2)
        cout<<"Greatest number is: "<<a.n1<<endl;
    else if(a.n1<b.n2)
        cout<<"Greatest number is: "<<b.n2<<endl;
    else
        cout<<"Both numbers are equal"<<endl;
}

int main(){
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Program to find largest of two numbers in two different classes using friend function: "<<endl;
    A a;
    B b;
    a.getdata();
    b.getdata();
    maxnumber(a,b);
    cout<<endl;
    return 0;
}