#include<iostream>
using namespace std;

class employee{                //create class employee
    private:
    int salary;
    public:
    void setsalary(int s){
        salary =s;
    }
    int getsalary(){
        return salary;
    }
};
int main(){
    employee myobj;                 //creating object for class employee
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Output is: ";
    myobj.setsalary(1000000);
    cout<<myobj.getsalary();
    return 0;
}