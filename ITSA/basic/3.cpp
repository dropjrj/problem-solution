#include <iostream>  
#include <math.h>  
using namespace std;  
  
int main(){  
    double x, y, z;  
    while(cin>> x >> y){  
        if(x <= 100 && x >= -100 && y <= 100 && y >= -100){  
            z = x * x + y * y;  
            if(z <= 10000)  
                cout<<"inside"<<endl;  
        }  
        else  
            cout<<"outside"<<endl;  
    };  
      
      
      
    return 0;  
}  
