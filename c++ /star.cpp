#include<iostream>
using namespace std;
void print1(int n){}
void print2(int n)
{

    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print3(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
void print5(int n){
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            cout << " ";
        }
        for(int j=0;j<(2*i+1);j++)
        {
            cout << "*";
        }
        for(int j=0;j<(n-i-1);j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
}
void print6(int n){
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<i;j++)
        {
            cout << " ";
        }
        for(int j=0;j<2*n-(2*i+1);j++)
        {
            cout << "*";
        }
        for(int j=0;j<i;j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
}
void print4(int n) {
    for (int i = n; i >= 1; i--) {           
        for (int j = 1; j <= i; j++) {       
            cout << j <<" ";
        }
        cout << endl;
    }
}
void print7(int n){
    for(int i=1; i<2*n; i++){           
        int stars = (i > n) ? 2*n - i : i;  
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void print8(int n){
    int start=1;
    for(int i=0; i<n;i++){
        if(i%2==0){
            start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout << start << " ";
            start=1-start;
        }
        cout << endl;
    }
}
void print9(int n){
    for(int i=1; i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
          
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    
    print9(n);
    return 0;
}