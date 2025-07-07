//Program to find largest of three numbers using friend function
#include <iostream>
using namespace std;

class maxnumber{
    int n1, n2, n3;
    public:
    void getdata(){
        cout<<"Enter first, second and third number: ";
        cin>>n1>>n2>>n3;
    }
    friend void oprdata(maxnumber m);
};

void oprdata(maxnumber m){
    if (( m.n1>m.n2) && (m.n1>m.n3 ))
        cout<<"Largest number is: "<<m.n1;
    else if (m.n2>m.n3)
        cout<<"Largest number is: "<<m.n2;
    else
        cout<<"Largest number is: "<<m.n3;
}

int main(){
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Program to find largest of three numbers using friend function: "<<endl;
    maxnumber m;
    m.getdata();
    oprdata(m);
    cout<<endl;
    return 0;
}