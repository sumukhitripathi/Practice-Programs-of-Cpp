//Nested class
#include<iostream>
#include<conio.h>
using namespace std;

class report{
    int rollno, age;
    char name[25], gender[10];
    class dob{
        int dd, mm, yyyy;
        public:
        void get(){
            cin>>dd>>mm>>yyyy;
        }
        void display(){
            cout<<dd<<"-"<<mm<<"-"<<yyyy;
        }
    }dob;
    public:
    void getdata();
    void displaydata();
};

void report::getdata(){
    cout<<"Enter roll no: ";
    cin>>rollno;
    cout<<"Enter name: ";
    cin>>name;
    
}