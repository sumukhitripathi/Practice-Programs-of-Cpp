#include<iostream>
using namespace std;
class car{
    public:
    int speed(int maxspeed);
};
int car::speed(int maxspeed){
    return maxspeed;
}
int main(){
    car obj1;
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<"\n";
    cout<<"Maximum speed of the car is ";
    cout<<obj1.speed(180);
    return 0;
}