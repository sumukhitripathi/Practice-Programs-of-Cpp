#include<iostream>
using namespace std;

class overload{
    int a, b, c;
    public:
    void getdata(int x, int y, int z);
    void displaydata(void);
    void operator++();
    void operator--();
    void operator-();
};

void overload ::getdata(int x, int y, int z){
    a=x;
    b=y;
    c=z;
}

void overload::displaydata(void){
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    cout<<"Value of c is "<<c<<endl;
}

void overload:: operator++(){
    a=--a;
    b=--b;
    c=--c;
}

void overload::operator--(){
    a=-a;
    b=-b;
    c=-c;
}

void overload::operator-(){
    a=++a;
    b=++b;
    c=++c;
}

int main(){
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Program to overload unary operators"<<endl;
    overload obj;
    obj.getdata(7,8,9);
    cout<<"The value before overloading is"<<endl;
    obj.displaydata();
    ++obj;
    cout<<"The value after ++ overloading is"<<endl;
    obj.displaydata();
    --obj;
    cout<<"The value after -- overloading is"<<endl;
    obj.displaydata();
    -obj;
    cout<<"The value after - overloading is"<<endl;
    obj.displaydata();
    return 0;
}