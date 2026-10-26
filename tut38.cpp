#include<iostream>  // This program demonstrates the concept of public inheritance in C++.
using namespace std;  /*single inheritance is a type of inheritance in which a derived class inherits from a single base class. In this type of inheritance, the derived class can access the public and protected members of the base class, but it cannot access the private members of the base class. The derived class can also add its own members and functions, which are not present in the base class.
*/
class Base{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base::setdata(void){
    data1=10;
    data2=20;
}
int Base::getdata1(){
    return data1;
}
int Base::getdata2(){
    return data2;
}
class Derived:public Base{  //public inheritance means that the public members of the base class become public members of the derived class, and the protected members of the base class become protected members of the derived class. The private members of the base class remain inaccessible to the derived class.
    int data3;
    public:
    void process();
    void display();
};
void Derived::process(){
    data3=data2*getdata1();
}
void Derived::display(){
    cout<<"Value of data1 is "<<getdata1()<<endl;
    cout<<"Value of data2 is "<<getdata2()<<endl;
    cout<<"Value of data3 is "<<data3<<endl;
}
int main(){
    Derived d;
    d.setdata();
    d.process();
    d.display();
    
    return 0;
    
}