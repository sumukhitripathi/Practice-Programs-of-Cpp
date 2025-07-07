//Program to add two complex no.s using constructor overloading
#include<iostream>
using namespace std;
class complex{
    float x, y;
    public:
    complex(){}
    complex(float a){
        x=y=a;
    }
    complex(float r, float img){
        x=r;
        y=img;
    }
    friend complex sum (complex c2, complex c3);
    void display(){
        cout<<x<<""<<"+j"<<""<<y;
    }
};

complex sum (complex c2, complex c3){
    complex a;
    a.x=c2.x+c3.x;
    a.y=c2.y+c3.y;
    return a;
}

int main(){
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Program to add two complex no.s using constructor overloading"<<endl;
    complex c1;
    complex c2(4,5);
    complex c3(9.7,3.2);
    complex c4;
    c4=sum(c2,c3);
    cout<<"\nFirst complex no. c1: ";
    c2.display();
    cout<<"\nSecond complex no. c2: ";
    c3.display();
    cout<<"\nSum: c=c1+c2= ";
    c4.display();
    cout<<endl;
    return 0;
}