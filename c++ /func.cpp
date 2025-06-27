#include <iostream>
using namespace std;
int sum(int x,int y){
    int z= x + y;//5+7=12
    return z;
}

int  main(){
    int x,y;
    cin >> x >> y;
    int result = sum(x, y);//12
    cout << "Sum: " << result << endl;
    
}