#include<iostream>
using namespace std;
int main(){
    int a=4;
    int *p=&a;
    cout<<"The value of a is "<<*(p)<<endl;
    int *arr=new int[3];
     arr[0]=1 ;
 arr[1]=2;
 arr[2]=3;

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    *(arr+1)=2;
    delete[] arr;
    return 0;
}
