#include<iostream>
  // This program demonstrates the concept of multilevel inheritance in C++.
using namespace std;  //multilevel inheritance is a type of inheritance in which a derived class inherits from another derived class, which in turn inherits from a base class. In this type of inheritance, the derived class can access the public and protected members of the base class and the intermediate derived class, but it cannot access the private members of either class. The derived class can also add its own members and functions, which are not present in the base or intermediate derived classes.
class Student{
    protected:
    int roll_no;
    public:
    // void set_roll_no(int );
    void set_roll_no(int r){
        roll_no=r;
    }
    // void get_roll_no(void);
    void get_roll_no(void){
    cout<<"The roll number is"<<roll_no<<endl;
    cin>>roll_no;
    }
};
// void Student::set_roll_no(int r){
//     roll_no=r;
// }
// void Student::get_roll_no(void){
//     cout<<"The roll number is "<<roll_no<<endl;
//     cin>>roll_no;
// }
class exam:public Student{
    protected:
    float maths;
    float physics;
    public:
    // void set_marks(float,float);
    void set_marks(float m,float p){
        maths=m;
        physics=p;
    }
    // void get_marks(void);
    void get_marks(void){
        cout<<"The maths marks ia "<<maths<<endl;
        cout<<"The physics marks is "<<physics<<endl;
    }
};
// void exam::set_marks(float m1,float m2){
//     maths=m1;
//     physics=m2;
// }
// void exam::get_marks(void){
//     cout<<"The marks obtained in maths are "<<maths<<endl;
//     cout<<"The marks obtained in physics are "<<physics<<endl;
// }
class result:public exam{
    float percentage;
    public:
    void display_result(void);
};
void result::display_result(void){
    get_roll_no();
    get_marks();
    percentage=(maths+physics)/2;
    cout<<"The percentage obtained is "<<percentage<<endl;
}
int main(){
    result shivani;
    shivani.set_roll_no(101);
    shivani.set_marks(90.0,80.0);
    shivani.display_result();
    return 0;
}