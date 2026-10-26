#include <iostream>
using namespace std;//This is a program to demonstrate the use of static data members and static member functions in C++.
// We will create a class called Employee that will have a static data member called count and a static member function called getcount().
class employee
{
    int Id;
    static int count;

public:
    void setId(void)
    {
        cout << "Enter id " << endl;
        cin >> Id;
    }
    void getId(void)
    {
        cout << "The id of this employee is " << Id << "and this is employee number " << count << endl;
        count++;
    }
    static void getcount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};
int employee::count = 10;

int main()
{
    employee emp[4];
    for (int i = 0; i < 4; i++)
    {
        emp[i].setId();
        emp[i].getId();
        emp[i].getcount();
    }
    return 0;
}