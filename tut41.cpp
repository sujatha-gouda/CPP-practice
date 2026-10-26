#include<iostream>// This program demonstrates the concept of multiple inheritance in C++.
using namespace std;
class base1{
    int base_var1;
    public:
    void setdata1(int b){
        base_var1=b;
    }
    int getdata1(void){
        return base_var1;
    }
};
class base2{
    int base_var2;
    public:
    void setdata2(int b){
        base_var2=b;
    }
    int getdata2(void){
        return base_var2;
    }
    
};
class Derived:public base1,public base2{// Derived class is inheriting from both base1 and base2 classes
    
    public:
    int var_derived;
    void dispaly(void){
        cout<<"The value of base_var1 is "<<getdata1()<<endl;// calling the getdata1() function of base1 class
        cout<<"The value of base_var2 is "<<getdata2()<<endl;// calling the getdata2() function of base2 class
        cout<<"The value of var_derived is "<<var_derived<<endl;
        cout<<"The sum of all the values is "<<getdata1()+getdata2()+var_derived<<endl;//
    }
};
int main(){
    Derived d;
    d.setdata1(10);
    d.setdata2(20);
    d.var_derived=30;
    d.dispaly();
    return 0;
}
