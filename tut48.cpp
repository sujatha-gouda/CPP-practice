#include<iostream> //this program demonstrates the order of exectation of constructors
using namespace std;
class base1{
    protected:
    int i;
    public:
    base1(int i){
        i=i;
        cout<<"constructor 1 is called "<<endl;
    }
    void printdata1(void){
        cout<<"Data1 is "<<i<<endl;
    }

};
class base2{
    protected:
    int j;
    public:
    base2(int j){
        j=j;
        cout<<"constructor 2 is called "<<endl;
    }
    void printdata2(void){
        cout<<"Data2 is "<<j<<endl;
    }

};
class derived:public base1,public base2{
    protected:
    int d1,d2;
    public:
    derived(int a,int b,int c,int d):base1(a),base2(b){
        d1=c;
        d2=d;
        cout<<"Derived class constructor is called "<<endl;
    }
    void printdata(void){
        cout<<"The value od d1 is "<<d1<<endl;
        cout<<"The value od d2 is "<<d2<<endl;
    }
};
int main(){
    derived d(2,4,6,8);
    d.printdata1();
    d.printdata2();
    d.printdata();
    return 0;
}
