#include <iostream>//constructors in c++
// A constructor is a special member function that is automatically called when an object of a class is created. It has the same name as the class and does not have a return type, not even void. Constructors are used to initialize the data members of a class.
using namespace std;

class Student {
    int age;
    string name;

public:
// Constructor with parameters
    Student(int a, string n) : age(a), name(n) {// Member initializer list
        cout << "Constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s(20, "Rahul");// Object creation with constructor parameters

    s.display();

    return 0;
}