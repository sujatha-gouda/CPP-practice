#include <iostream> //pointers and arrow operator
using namespace std;

class shop
{
    int itemId;
    float price;

public:
    void getData()
    {
        cout << "Enter the item id: " << endl;
        cin >> itemId;

        cout << "Enter the price of the item: " << endl;
        cin >> price;
    }

    void display()
    {
        cout << "The id of the item is " << itemId << endl;
        cout << "The price of the item with "
             << itemId << " is " << price << endl;
    }
};

int main()
{

    shop *ptr = new shop[3];// ptr is pointing to the first object of the array

    shop *p = ptr;// p is pointing to the first object of the array

    // Taking input
    for (int i = 0; i < 3; i++)
    {
        p->getData();
        p++;// p is pointing to the next object of the array
    }

    // Bring p back to first object
    p = ptr;// p is pointing to the first object of the array

    // Display objects
    for (int i = 0; i < 3; i++)
    {
        p->display();
        p++;
    }

    delete[] ptr;// free the memory allocated for the array of objects

    return 0;
}