#include <iostream>
using namespace std; /*This is a program to demonstrate the use of friend functions in C++.
  We will create a class called complex that will have two data members, a and b, which represent the real and imaginary parts of a complex number.
   We will also create a class called calculator that will have a member function called sumrealcomplex() which will take two complex objects as parameters and return the sum of their real parts.
    The sumrealcomplex() function will be declared as a friend function of the complex class, which allows it to access the private data members of the complex class.
     In the main function, we will create two complex objects, set their values, and then call the sumrealcomplex() function to get the result.*/
class complex;//forward declaration of the complex class. It is necessary because the calculator class uses the complex class in its member function declaration before the complex class is defined.
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);//friend function declaration. It is declared as a member function of the calculator class but is defined outside the class definition.
};

class complex
{
private:
    int a, b;
    friend int calculator::sumrealcomplex(complex, complex);//friend function definition. It is defined outside the class definition and can access the private data members of the complex class.

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
int calculator::sumrealcomplex(complex o1, complex o2)
{
    return o1.a + o2.a;//This function takes two complex objects as parameters and returns the sum of their real parts.
}

int main()
{
    complex o1, o2;
    o1.setNumber(3, 4);
    o1.printNumber();
    o2.setNumber(1, 2);
    o2.printNumber();
    calculator cal;
    int res = cal.sumrealcomplex(o1, o2);//This line creates an object of the calculator class and calls the sumrealcomplex() function with the two complex objects as arguments. The result is stored in the variable res.
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    return 0;
}
