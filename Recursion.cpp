#include<iostream>
using namespace std;

//factorial of a number using recursion-->a function which calls itself again and again
int fact(int n){
  if(n==0){
    return 1;}
    return n*fact(n-1);
  }
//fibonacci of a number using recursion-->here it is going to add two numbers which are before the mentioned numbers
 inline int fabinochi(int n){ /*inline Can reduce function call overhead for very small functions.
                                May make the program slightly faster.
                                it's a request  to the compiler not a command*/
    if(n==0){
      return 0;}
      if(n==1){
        return 1;}
        return fabinochi(n-2)+fabinochi(n-1);44
      }
      //fibonacci of a number using iteration
      int fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c;

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}
  
  
  int main(){
    int a;
    cout<<"Enter a number to find its factorial: ";
    cin>>a;
    cout<<"Factorial of "<<a<<" is: "<<fact(a)<<endl;
     cout<<"Enter a number to find its fabinochi: ";
    cin>>a;
    cout<<"Fabinochi of "<<a<<" is: "<<fabinochi(a)<<endl;
      cout << fibonacci(a) << endl;
  }
