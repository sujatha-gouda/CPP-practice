#include<iostream>
#include<vector>
#include<math.h>
#include<string.h>
using namespace std;

// namespace first{
//     int x=1;
// }
// namespace second{
//     int x=2;
// }

// typedef struct sudent{
//     int roll_no;
//     string name;
// }s;

int main(){
    // variables and basic data types
    //int a = 5;
    // float b= 5.8;
    // char c='S';
    // double d=2.000098;
    // long e=10000000;
    // cout<<a<<'\n';
    //  cout<<b<<'\n';
    //   cout<<c<<'\n';
    //    cout<<d<<'\n';
    //     cout<<e;*/

    // const keyword--once the variable is declared using const keyword it cannot be modified in feture
   /* const float pi=3.14;
    int r;

    float circumferance=2*pi*r;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>r;
    cout<<circumferance;*/

    //namespace
    // int x=0;
    
    // std::cout<<second::x;

    //using of typedef to give aliases name
    // s suji;
    // suji.roll_no=5;
    // suji.name="Sujatha";
    // cout<<"Roll no of the student is "<<suji.roll_no<<endl;
    // cout<<"Name "<<suji.name;
    
    // using important arthematic operators
    // int student=20;
    //student +=2;
    // student++;
    // cout<<student<<endl;

    // student-=2;
    // cout<<student<<endl;
    // int a=2;
    // int b=3;
    //  cout<<a*b<<'\n';
    //  cout<<a/b<<endl;
    // cout<<pow(a,b)<<endl;
    // cout<<pow(b,a)<<endl;

    // cout<<sqrt(a)<<endl;

    // type conversion
    // int correct=8;
    // int questions=10;
    // int score=correct/(double)questions *100;
    // cout<<score<<"%"<<endl;

    //user input
//     string name;
//     int age;
//     cout<<"Please enter your name "<<endl;
// cin>>name;
// getline(cin,name);
//     cout<<"Enter your age "<<endl;
//     cin>>age;
//     cout<<"your name is: "<<name<<"and your age is: "<<age<<endl;

// int a=pow(a,2);

// int b=pow(b,2);
int a,b;
cout<<"Enter the two sides of the triangle "<<endl;
cin>>a>>b;
int c=sqrt(pow(a,2)+pow(b,2));

cout<<"The hypotenuse of the triangle is "<<c<<endl;



    
        

        
        
    return 0;
}