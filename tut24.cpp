#include <iostream>
using namespace std;//This is a program to demonstrate the use of static data members and static member functions in C++.
// We will create a class called Employee that will have a static data member called count and a static member function called getcount().
// The count variable will be initialized to 100 and will be shared among all objects of the Employee class. The getcount() function will display the value of count.
// We will create three objects of the Employee class and call the setdata(), getdata(), and getcount() functions for each object to see how the static data member and static member function work.
class Employee
{
    int Id;
    static int count;//static data member declaration. It is shared among all objects of the class and is initialized outside the class definition.

public://static data members are shared among all objects of the class.
// They are not tied to any specific object and can be accessed using the class name.
    void setdata(void)
    {
        cout << "Enter id " << endl;
        cin >> Id;
    }
    void getdata(void)//non static member function can access both static and non static data members and member functions
    {
        cout << "The id of this employee is " << Id << "and this is employee number " << count << endl;
        count++;
    }
    static void getcount(void){
    cout<<"the value of count is "<<count<<endl;//static member functions can only access static data members and other static member functions. 
                                               //They cannot access non-static data members or non-static member functions directly. 
                                               //This is because static member functions do not have a this pointer, which is used to access non-static members of the class.
}
};
int Employee::count = 100;//static data member initialization. It is done outside the class definition and is shared among all objects of the class.

int main()
{
    Employee e1, e2, e3;//creating three objects of the Employee class. All three objects will share the same static data member count.
    e1.setdata();
    e1.getdata();
    e1.getcount();
    e2.setdata();
    e2.getdata();
    e2.getcount();//static member functions can be called using the class name without creating an object of the class.
    e3.setdata();
    e3.getdata();
    e3.getcount();
    return 0;//In this program, we have a class called Employee with a static data member count and a static member function getcount().
             //The count variable is initialized to 100 and is shared among all objects of the Employee
}