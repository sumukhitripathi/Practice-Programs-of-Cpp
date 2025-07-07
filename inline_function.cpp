#include<iostream>
using namespace std;
class employee{
    private:
    char name[20];
    int age;
    int salary;
    string address;
    int empid;
    public:
    void getdata();
    void displaydata();
}emp1;
inline void employee::getdata(){
    cout<<"Enter name of the employee: ";
    cin>>name;
    cout<<"Enter age of the employee: ";
    cin>>age;
    cout<<"Enter salary of the employee: ";
    cin>>salary;
    cout<<"Enter address of the employee: ";
    cin>>address;
    cout<<"Enter ID of the employee: ";
    cin>>empid;
}
inline void employee::displaydata(){
    cout<<"The name of the employee is "<<name<<endl;
    cout<<"The age of the employee is "<<age<<endl;
    cout<<"The salary of the employee is "<<salary<<endl;
    cout<<"The address of the employee is "<<address<<endl;
    cout<<"The ID of the employee is "<<empid<<endl;
}
int main(){
    employee emp1[50];
    int n, i;
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Program to get details of employee and display it using inline functions"<<endl;
    cout<<"Enter no. of employees: ";
    cin>>n;
    for (i=0; i<n; i++){
        cout<<"Enter details of employee "<<i+1<<endl;
        emp1[i].getdata();
    }
    cout<<endl;
    for (i=0; i<n; i++){
        cout<<"\n Employee Details: "<<i+1<<endl;
        emp1[i].displaydata();
    }
    return 0;
}