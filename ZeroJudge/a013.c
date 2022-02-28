#include <stdio.h>
#include <string.h>

#define LEN 100

int romeToNum(char*);
void numToRome(int, char*);

int main(){
    char inputRome[2][LEN] = {'\0'}, subRome[LEN] = {'\0'};
    int inputNum[2] = {0}, subNum;
    while(scanf("%s", inputRome[0])){
        if(inputRome[0][0] == '#') break;
        scanf("%s", inputRome[1]);
        for(int i = 0; i < 2; i++){
            inputNum[i] = romeToNum(inputRome[i]);
        }
        if(inputNum[0] > inputNum[1]){
            subNum = inputNum[0] - inputNum[1];
        }
        else{
            subNum = inputNum[1] - inputNum[0];
        }
        if(subNum == 0){
            printf("ZERO\n");
            continue;
        }
        numToRome(subNum, subRome);
        printf("%s\n", subRome);
        memset(subRome, 0, sizeof(subRome));
    }

    return 0;
}

int romeToNum(char *rome){
    char romeList[8] = "MDCLXVI";
    int romeValue[7] = {1000, 500, 100, 50, 10, 5, 1};
    int change[strlen(rome)], sum = 0;
    for(int i = 0; i < strlen(rome); i++){
        for(int j = 0; j < 7; j++){
            if(rome[i] == romeList[j]){
                change[i] = romeValue[j];
                break;
            }
        }
    }
    for(int i = 0; i < strlen(rome) - 1; i++){
        if(change[i] < change[i + 1]){
            sum -= change[i];
        }
        else{
            sum += change[i];
        }
    }
    sum += change[strlen(rome) - 1];
    return sum;
}

void numToRome(int num, char *subRome){
    char romeNum[13][3] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int romeValue[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    int temp;
    for(int i = 0; i < 13; i++){
        temp = num / romeValue[i];
        for(int j = 0; j < temp; j++){
            strcat(subRome, romeNum[i]);
        }
        num %= romeValue[i];
    }
}
