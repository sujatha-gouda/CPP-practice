#include<iostream>
using namespace std;
class base1{
    public:
    void display(void){
        cout<<"hi! how are you "<<endl;
    }
};
class base2{
    public:
    void display(void){
        cout<<"hello! i am fine"<<endl;
    }
};
class derived:public base1,public base2{
    public:
    void display(){
        base2::display();
    }

};
int main(){
    derived d;
    d.display();
    return 0;
}
