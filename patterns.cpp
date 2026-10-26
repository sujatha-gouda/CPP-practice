// #include<iostream>
// using namespace std;
// void pattern1(int n){

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// void pattern2(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// void pattern3(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<< j<<" ";
//         }
//         cout<<endl;
//     }
// }
// void pattern4(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }
// void pattern5(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=(n-i-1);j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// void pattern6(int n){
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=(n-i-1);j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// void pattern7(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=(2*i+1);j++){
//             cout<<"*";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// void pattern8(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=(2*n-(2*i+1));j++){
//             cout<<"*";
//         }
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// void pattern9(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=(2*i+1);j++){
//             cout<<"*";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=(2*n-(2*i+1));j++){
//             cout<<"*";
//         }
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// int main(){
//     // pattern7(6);
//     // pattern8(6);
//     pattern9(6);
//     return 0;
// }
#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    if(num % 3 && num % 5){
        cout<<"Divisible by both 3 and 5"<<endl;
    }
    else{
        cout<<"Not divisible by both 3 and 5"<<endl;
    }

    // Complete the code

    return 0;
}