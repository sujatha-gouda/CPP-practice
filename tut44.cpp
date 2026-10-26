#include<iostream>//This program is to demonstrate the virtual base class
using namespace std;
class student{
    protected:
    int roll_no;
    string name;
    public:
     void setdata1(int r,string n){
      roll_no=r;
      name=n;
     }
     void displaydetails(void){
        cout<<"The name of the student is "<<name<<endl;
        cout<<"The roll no of the student is "<<roll_no<<endl;
     }
};
class test:virtual public student{
    protected:
    float maths;
    float physics;
    public:
    void setdata(float m,float p){
        maths=m;
        physics=p;
    }
    void displaymarks(void){
        cout<<"The marks obtained in physics: "<<physics<<"and maths is "<<maths<<endl;
        cout<<"the percentage of the marks is "<<(physics + maths)/2<<endl;
    }
};
class sports:virtual public student{
    protected:
float score;
    public:
    void setscore(float sc){
        score=sc;
    }
    void displayscore(void){
        cout<<"The score obtained is "<<score<<endl;
    }

};
class result:public test,public sports{
   
};
int main(){
    result Sujatha;
    Sujatha.setdata1(107,"Suji");
    Sujatha.displaydetails();
    Sujatha.setdata(100,98);
    Sujatha.displaymarks();
    Sujatha.setscore(95);
    Sujatha.displayscore();
    return 0;
}