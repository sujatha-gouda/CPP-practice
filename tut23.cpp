#include<iostream>
using namespace std;//This is a program to demonstrate the use of classes and objects in C++. We will create a class called shop
                    // that will have two arrays, one for item IDs and another for item prices. 
                    //We will also have a count variable to keep track of the number of items in the shop.
                    // The class will have two member functions, setItem() to set the item details and display() to display the item details.
class shop{
    int itemId[10];
    int itemprice[10];
    int count;
    public:
    void initcount(void){//This function is used to initialize the count variable to 0. 
        //It is called before setting any item details to ensure that the count starts from 0.
        count=0;
    }
    void setItem(void);
    
    void display();
};
void shop::setItem(void){//This function is used to set the item details. 
    //It takes the item ID and item price as input from the user and stores them in the respective arrays.
    cout<<"Enter  the id of your item"<<endl;
    cin>>itemId[count];
     cout<<"Enter the price of the item"<<endl;
    cin>>itemprice[count];
    count++;
}

void shop::display(){
    for(int i=0;i<count;i++){
        cout<<"The ID is "<<itemId[i]<<endl;
        cout<<" and the price is "<<itemprice[i]<<endl;
    }

}
int main(){
    shop s;
    s.initcount();//This function is called to initialize the count variable to 0 before setting any item details. 
                 //This ensures that the count starts from 0 and increments correctly as items are added to the shop.
    int n;
     cout << "Enter number of items: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        s.setItem();//This function is called in a loop to set the details of each item in the shop. 
                   //The loop runs n times, where n is the number of items entered by the user. 
                   //Each time the function is called, it takes the item ID and item price as input and stores them in the respective arrays.
    }

    s.display();


    return 0;
}
