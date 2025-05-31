#include <iostream>
using namespace std;
// int main() {
//     // Declare an array of integers
//     int arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     // Print the elements of the array
//     cout << "Enter your element of the array:" <<arr[0] << endl;

// return 0;
// }
// int main(){
//     //2d array
//     int arr[3][3];
//     arr[1][3]=9;
//     cout<<arr[1][3] << endl;
//     cout<<arr[1][2] << endl;
// }
//2d array is like it has row and column means example it has 3 rows and 3 columns or 1 row and 3 columns.
int main(){
    string s="Hello";
    int a= s.length(); // returns the length of the string
    s[a-1]='e'; // changes the last character of the string to 'e'
    cout<<s[0] << endl; // prints 'H'
    cout<<s << endl; // prints 'e'
    cout<<a << endl; // prints the length of the string
    cout<<s[a-1]<< endl; // prints the last character of the string
    
}