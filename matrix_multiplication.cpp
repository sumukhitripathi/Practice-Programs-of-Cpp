//Multiplication of matrices using oop
#include<iostream>
using namespace std;
class product{
    int r,c;
    int arr1[10][10], arr2[10][10];
    public:
    void getdata();
    void multiply();
}m1, m2;

int main(){
    product m;
    m.getdata();
    m.multiply();
}

void product::getdata(){
    int i,j;
    cout<<"Program by SUMUKHI_TRIPATHI_174_CSE_23"<<endl;
    cout<<"Enter rows and columns of matrix A: "<<endl;
    cin>>m1.r>>m1.c;
    cout<<"Enter rows and columns of matrix B: "<<endl;
    cin>>m2.r>>m2.c;
    if (m1.c!=m2.r){
        cout<<"Matrix multiplication not possible"<<endl;
        return;
    }
    cout<<"Enter elements of matrix A row-wise: "<<endl;
    for (i=0; i<m1.r; i++){
        for (j=0; j<m1.c; j++)
            cin>>arr1[i][j];
    }
    cout<<"Enter elements of matrix B row-wise: "<<endl;
    for (i=0; i<m2.r; i++){
        for (j=0; j<m2.c; j++)
            cin>>arr2[i][j];
    }
}

void product::multiply(){
    int i,j,k, arr3[10][10],sum=0;
    for (i=0; i<m1.r;i++){
        for (j=0; j<m2.c;j++){
            for (k=0; k<m2.r; k++){
                sum=sum=arr1[i][k]*arr2[k][j];
            }
            arr3[i][j]=sum;
            sum=0;
        }
    }
    cout<<"Product of the matrix is: "<<endl;
    for(i=0; i<m1.r; i++){
        cout<<"\n";
        for (j=0; j<m2.c; j++){
            cout<<arr3[i][j];
            cout<<"\t";
        }
    }
} 