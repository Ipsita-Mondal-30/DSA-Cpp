#include <iostream>
using namespace std;
//Write a program to show the person is eligible to vote or not using if else statement.
// int main(){
//     int age;
//     cout << "Enter your age: ";
//     cin>>age;
//     if(age>=18){
//         cout<<"Eligible to vote"<<endl;
//     }
//     else if (age < 18 && age >= 0) {
//         cout<<"Not eligible to vote"<<endl;
//     }
//     return 0;
// }
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age<18){
        cout<<"Not eligible for job"<<endl;

    }
    else if(age>=18){
        cout<<"Eligible for job"<<endl;
    }
    else if(age>=55 && age<=57){
        cout<<"Eligible for job but retierment soon"<<endl;
    }
    else if(age>=60){
        cout<<"Retiered"<<endl;
    }
    return 0;
    }
