#include<iostream>//this pointer
using namespace std;
class A{
    int a;
    public:
    A& setdata(int a1){
        this->a=a1;//this pointer is used to refer to the current object of the class
        return *this;//returning the current object of the class
    }
    void getdata(void){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    A a;
    a.setdata(4).getdata();//chaining of functions
    return 0;
}