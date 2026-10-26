#include<iostream>  // This program demonstrates the concept of protected inheritance in C++.
using namespace std;
class Base{  
    protected:
    int a;
    public:
    int b;
};
class Derived:protected Base{
};
int main(){
    Derived d;
  Base b;
  // d.a=10; // This will give an error because 'a' is a protected member of Base and cannot be accessed directly by Derived class objects.
    return 0;
}