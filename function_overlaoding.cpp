#include<iostream>
using namespace std;
float area(float, float);
float area(float);
float area(int, float);

float area(float b, float h){
    float ans=0.5*b*h;
    return ans;
}
float area(float r){
    float ans=3.14*r*r;
    return ans;
}
float area(int l, float w){
    float ans=l*w;
    return ans;
}

int main(){
    int n,l;
    float circle, parallelogram ,triangle, r, b, w, h;
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Program to find area of circle, triangle & parallelogram"<<endl;
    cout<<"\n Enter 1 for circle, \nEnter 2 for triangle, \nEnter 3 for parallelogram"<<endl;
    cin>>n;
    switch(n){
        case 1: cout<<"Enter radius of circle: ";
        cin>>r;
        circle=area(r);
        cout<<"Area of circle is "<<circle<<endl;
        break;
        case 2: cout<<"Enter base of triangle: ";
        cin>>b;
        cout<<"Enter height: ";
        cin>>h;
        triangle=area(b,h);
        cout<<"Area of traingle is "<<triangle<<endl;
        break;
        case 3: cout<<"Enter base and height of parallelogram: ";
        cin>>l>>w;
        parallelogram=area(l,w);
        cout<<"Area of parallelogram is "<<parallelogram<<endl;
        break;
        default: cout<<"Invalid input";
    }
}