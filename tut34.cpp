#include<iostream>//copy constructor-A constructor which initializes a new objects by using the objects of another existing constructor of same class
using namespace std;  //when no copy constructor is found then compiler will provide  its own copy constructor
class Number{
    int num;
    public:
    Number(){}
    Number(int num1){
        num=num1;
    }
    Number(const Number & obj){
        cout<<"copy constructor is called"<<endl;
        num=obj.num;
    }
    void display(){
        cout<<"The number for this object  is "<<num<<endl;
    }
};
int main(){
    Number x,y,z;
   x=Number(107);  //normal constructor
    x.display();
    Number x1=x;  //copy constructor
    x1.display();
   return 0;

 }