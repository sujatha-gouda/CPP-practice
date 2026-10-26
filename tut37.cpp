#include <iostream> // This program demonstrates the concept of public inheritance in C++.
using namespace std; 

class employee {
public:
    int id;
    float salary;
};

class Derived : public employee { // public inheritance means that the public members of the base class become public members of the derived class, and the protected members of the base class become protected members of the derived class. The private members of the base class remain inaccessible to the derived class.
public:
    Derived(int id, float salary) {
        this->id = id;
        this->salary = salary;
    }
};

int main() {

    Derived shivani(101, 34000);

    cout << shivani.salary << endl;
    cout << shivani.id << endl;

    return 0;
}