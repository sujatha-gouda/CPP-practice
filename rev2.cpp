#include <iostream>
#include<time.h>
using namespace std;
int main()
{

    // if-else statements
    //      float money;
    //      cout<<"Enter how much money you have\n";
    //      cin>>money;
    //      if(money>=2000){
    //          cout<<"Your are eligibal to go to trip\n";
    //      }
    //      else{
    //          cout<<"Stay at home and take care kiddo\n";
    //      }
    //      return 0;

    // switch case
    // int month;
    // cout<<"Enter the month: \n";
    // cin>>month;
    // switch(month){
    //     case 1:cout<<"jan\n";
    //     break;
    //      case 2:cout<<"Feb\n";
    //     break;
    //      case 3:cout<<"march\n";
    //     break;
    //      case 4:cout<<"april\n";
    //     break;
    //      case 5:cout<<"may\n";
    //     break;
    //      case 6:cout<<"june\n";
    //     break;
    //      case 7:cout<<"july\n";
    //     break;
    //      case 8:cout<<"august\n";
    //     break;
    //      case 9:cout<<"september\n";
    //     break;
    //      case 10:cout<<"oct\n";
    //     break;
    //      case 11:cout<<"nov\n";
    //     break;
    //      case 12:cout<<"december\n";
    //     break;
    //      default:cout<<"Enter the month between(1-12)\n";
    //     break;
    // }

    // if-else-if ladder
    // int age;
    // cout << "Enter your age\n";
    // cin >> age;
    // if(age<=20){
    //     cout<<"you are too young for this\n";
    // }
    // else if(age=120){
    //     cout<<"Your are too old for this\n";
    // }
    // else{
    //     cout<<"you are the out of the world";
    // }
    // ternary operator
    //  int grade=70;
    //  cout<<(grade>60?"you are pass":"you are fail");
    // return 0;
    // int age=19;
    // if(age>=0 && age<=20){
    //     cout<<"hi you are eligible";
    // }
    
     srand(time(0));
    int randomNumber=(rand()%10)+1;
    cout<<"Guess the number between 1 to 10\n";
    cout<<randomNumber<<endl;
    // cout<<"*************random event genrator*************\n";
    // cout<<"1. Head\n";
    // cout<<"2. Tail\n";
    // int randomNumber=(rand()%15)+1;
    // cout<<"Random number is "<<randomNumber<<endl;
    // cout<<"*************random event genrator*************\n";
    // int randomNumber=(rand()%4)+1;
    // switch(randomNumber){
    //     case 1:cout<<"Hurrey! You won a car\n";
    //     break;
    //     case 2:cout<<"wow! You won a lottery ticket worth $1000\n";
    //     break;
    //     case 3:cout<<"Great! You won a gift card\n";
    //     break;
    //     case 4:cout<<"Nice! You won a free movie ticket\n";
    //     break;

    //     default:cout<<"Better luck next time! You didn't win anything\n";

    //     break;
    // }
    // cout<<"********************************************************\n";

    // string name;
    // cout << "Enter your name\n";
    // cin >> name;
    // cout << "Hello " << name << ", Welcome to the random event generator!\n";
    // cout<<name.length()<<endl;
    // name.empty();
    // cout<<name<<endl;
    return 0;

}