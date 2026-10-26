#include<iostream>//pointers and arrow operator
using namespace std;
class complex{
    int imaginary,real;
    public:
    void setdata(int a,int b){
        real=a;
        imaginary=b;
    }
    void getdata(void){
        cout<<"The complex number is "<<real<<"+"<<imaginary<<"i"<<endl;
    }
};
int main(){
    complex c1;
    c1.setdata(12,15);
    c1.getdata();
    complex *ptr=&c1;
    (*ptr).setdata( 20,25);
    (*ptr).getdata();
    complex *ptr2=new complex;
    ptr2->setdata(20,25);//arrow operator--derencing and accessing members of class
    ptr2->getdata();//arrow operator-->it is used to access the members of a class through a pointer
    delete ptr2;
    return 0;
}
