#include <iostream>  
using namespace std;  
  
int recursion(int a){  
    if(a <= 1){  
        return 2;  
    }  
    else{  
        return recursion(a - 1) + recursion(a / 2);  
    }  
}  
  
int main(){  
    int input;  
    cin >> input;  
    cout << recursion(input) << endl;  
    return 0;  
} 
