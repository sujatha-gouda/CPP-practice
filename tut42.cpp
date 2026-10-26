#include<iostream>
#include<math.h>
using namespace std;

class simpleCalc{
    protected:
    int a,b;
    public:
    // void setdata(int a1,int b1){
    //     a=a1;
    //     b=b1;
    // }
    void getdata(void){
        cout<<"Enter two numbers "<<endl;
        cin>>a>>b;
    }
    void display(void){
        cout<<"The addition of a and b is "<<a+b<<endl;
        cout<<"The subtraction of a and b is "<<a-b<<endl;
        cout<<"The multiplication of a and b is "<<a*b<<endl;
        
        
    }
};
class scientificcalc{
    protected:
    int a2,b2;
    public:
    // void setdata2(int a2,int b2){
    //     a2=a2;
    //     b2=b2;
    // }
    void getdata2(void){
        cout<<"Enter two numbers "<<endl;
        cin>>a2>>b2;
    }
    void displaydata(void){
        cout<<"The power ="<<pow(a2,b2)<<endl;
        cout<<"square of = "<<sqrt(a2)<<endl;
        cout<<"square of = "<<sqrt(b2)<<endl;
        cout<<"The absolute difference "<<abs(b2-a2)<<endl;

    }
};
class hybridcalc:public simpleCalc,public scientificcalc{

};
int main(){
    hybridcalc h;
    // h.setdata(2,3);
    h.getdata();
    h.display();
    h.getdata2();
    h.displaydata();
    return 0;
}
