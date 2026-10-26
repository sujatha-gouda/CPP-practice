#include<iostream>
using namespace std;
// class Employee{
//     private:
//     string name;
//     int rollNo;
//     public:
//     float salary;
//     void setdata(string n,int rno);
//     void getdata(){
//         cout<<"The name of the Employee:"<<name<<endl;
//         cout<<"The rollno of the Employee:"<<rollNo<<endl;
//         cout<<"The salary of the employee:"<<salary<<endl;
//     }
    
// };
// void Employee::setdata(string n,int rno){
//     rollNo=rno;
//     name=n;
// }
// int main(){
//    Employee Sujatha;
//    Sujatha.salary=150000;
//    Sujatha.setdata("Manager",107);
//    Sujatha.getdata();
//    return 0; 
// }

class animals
{
private:
string bark;
string name;//data members of the class. They are private, which means they can only be accessed by member functions of the class.
   
public:
string pet_name;
   void setdata(string b,string n);//member function declaration. It is used to set the values of the data members bark and name. It takes two parameters, b and n, which are used to initialize the data members.
   
    void showdata();
   void getdata(){
    cout<<"The animal which is  barking is :"<<endl;
    cin>>bark;
    cout<<"The name of the animal is: "<<endl;
    cin>>name;
    cout<<"The pet name of the animal is: "<<endl;
    cin>>pet_name;
    void showdata();
    
   }
   
};
void animals::setdata(string b,string n/* args */)
{
    bark=b;
    name=n;
}
void animals::showdata(){
    cout<<"The animal which is  barking is :"<<bark<<endl;
    cout<<"The name of the animal is: "<<name<<endl;
    cout<<"The pet name of the animal is: "<<pet_name<<endl;
}
int main(){
    animals dog;
    dog.pet_name="Rocky";//accessing the public data member pet_name of the class animals and assigning it a value "Rocky". Since pet_name is a public data member, it can be accessed directly using the object name (dog) without the need for a member function.
    dog.setdata("dog","scobey");
    dog.getdata( );
    dog.showdata();
    return 0;

}
