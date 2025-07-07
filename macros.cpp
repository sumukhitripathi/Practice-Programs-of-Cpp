//To determine largest of three numbers using macros
#include<iostream>
using namespace std;
#define max(a,b)(a>b)?a:b
int main(){
    int n1,n2,n3, lg1, lg2;
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Enter three integers"<<endl;
    cin>>n1>>n2>>n3;
    lg1=max(n1,n2);
    lg2=max(n3,lg1);
    cout<<"The largest of "<<n1<<", "<<n2<<" and "<<n3<<" is "<<lg2;
    return 0;
}