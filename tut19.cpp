#include<iostream>
using namespace std;//This is a program to demonstrate function overloading, which allows us to have multiple functions with the same name but different parameters.
// In this program, we have defined several overloaded functions for sum, volume, factorial, and Fibonacci calculations. The main function calls these overloaded functions with different arguments to show how they work.
int sum(int a,int b){
    return a+b;
}
int sum(int a, int b, int c){  //functionoverloading-->multiple functions can have same name but with different parameters

    return a+b+c;
}
int volume(int r,int h){//function overloading for volume of a cylinder
    return (3.14*r*r*h);
}
int volume(int a){
    return (a*a*a);//function overloading for volume of a cube
}
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int fab(int n){
    if(n<2){
        return 1;
    }
    else{
        return fab(n-2)+fab(n-1);
    }
}
int main(){
    cout<<"The sum of 2 and 3 is :"<<sum(2,3)<<endl;//This line calls the overloaded sum function that takes two integer parameters and prints the result.
    cout<<"The sum of 2,3 and 5 is :"<<sum(2,3,5)<<endl;
    cout<<"The volume of cylinder is :"<<volume(2,3)<<endl;//This line calls the overloaded volume function that takes two integer parameters (radius and height) and prints the result. 
    cout<<"The sum of cube is :"<<volume(2)<<endl;
    cout<<"The factorial of 3 is"<<fact(3)<<endl;
    cout<<"The fabhinochhi of 2 is"<<fab(2)<<endl;
    return 0;
}