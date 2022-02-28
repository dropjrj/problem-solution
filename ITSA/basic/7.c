#include <iostream>  
using namespace std;  
  
int main() {  
    int n;  
    cin>>n;  
    int input[n][4], ans[n][2];  
    char op[n];  
    for(int i = 0; i < n; i++){  
        cin>> op[i]>> input[i][0]>>input[i][1]>>input[i][2]>>input[i][3];  
    }  
    for(int i = 0; i < n; i++){  
        switch(op[i]){  
            case '+':  
                ans[i][0] = input[i][0] + input[i][2];  
                ans[i][1] = input[i][1] + input[i][3];  
                break;  
            case '-':  
                ans[i][0] = input[i][0] - input[i][2];  
                ans[i][1] = input[i][1] - input[i][3];  
                break;  
            case '*':  
                ans[i][0] = input[i][0] * input[i][2] - input[i][1] * input[i][3];  
                ans[i][1] = input[i][0] * input[i][3] + input[i][1] * input[i][2];  
                break;  
        }  
    }  
    for(int i = 0; i < n; i++){  
        cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";  
    }  
    return 0;  
}  
