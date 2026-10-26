#include<iostream>
using namespace std;
int count=0;

class num{
    public:
    // num(){
    //     count++;
    //     cout<<"This is the time when constructor is called for object = "<<count<<endl;
    // }
        ~num(){
         cout<<"This is the time when deconstructor is called for object = "<<count<<endl;   
          count--;
        }
    
};
int main(){
    cout<<"Creating first object"<<endl;
   num n1;
    {
       cout<<"Creating 2 more objects"<<endl;
   num n2 ,n3;  
    }
    return 0;
}