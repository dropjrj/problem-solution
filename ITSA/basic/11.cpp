#include <iostream>  
using namespace std;  
  
int main(){  
    int row, down;  
    cin >> row >> down;  
    int input[row][down];  
    for(int i = 0; i < row; i ++){  
        for(int j = 0; j < down; j++){  
            cin >> input[i][j];  
        }  
    }  
    for(int i = 0; i < down; i ++){  
        for(int j = 0; j < row; j++){  
            cout << input[j][i];  
            if(j < row - 1){  
                cout << " ";  
            }  
            else{  
                cout << "\n";  
            }  
        }  
    }  
    return 0;  
}  
