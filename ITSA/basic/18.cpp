#include <iostream>  
#include <string.h>  
using namespace std;  
  
int main()  
{  
    string input;  
    string a="!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:""asdfghjkl;''<>??zxcvbnm,.//";  
    getline(cin, input);  
    int len = input.size();  
    int lena = a.size();  
    for(int i = 0; i < len; i++){  
        if(input[i] >= 'A' && input[i] <= 'Z'){  
            input[i] = input[i] - 'A' + 'a';  
        }  
        for(int j = 0; j < lena; j++){  
            if(input[i] == ' '){  
                break;  
            }  
            if(input[i] == a[j]){  
                input[i] = a[j+1];  
                break;  
            }  
        }  
        cout<< input[i];  
    }  
    cout<<endl;  
      
    return 0;  
}  
