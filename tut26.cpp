#include<iostream>
using namespace std;//
class complex
{
private:
    int a,b;
    friend complex sumcomplex(complex,complex);
public:
   void setNumber(int n1,int n2){
    a=n1;
    b=n2;
   }
   void printNumber(){
    cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
   }
};
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.a),(o1.a+o2.b));
    return o3;
}
int main(){
    complex o1,o2,sum;
    o1.setNumber(5,6);
    o1.printNumber();
    o2.setNumber(3,5);
    o2.printNumber();
    sum=sumcomplex(o1,o2);
    sum.printNumber();
    return 0;
}