//Program to generate fibonacci series using copy constructor
#include<iostream>
using namespace std;

class Fibonacci{
    int a,b,c,d;
    public:
    Fibonacci(){}
    Fibonacci(int l){
        d=l;
    }
    Fibonacci(Fibonacci &l){
        l.b=0;
        l.c=1;
        cout<<" "<<l.b<<" "<<l.c;
        for (int i=2; i<=l.d; i++){
            l.a=l.b+l.c;
            cout<<" "<<l.a;
            l.b=l.c;
            l.c=l.a;
        }
    }
};

int main(){
    char c;
    int l;
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Program to generate fibonacci series using copy constructor"<<endl;
    cout<<"Enter length of series: ";
    cin>>l;
    Fibonacci A(l);
    Fibonacci B(A);
    cout<<endl;
    return 0;
}