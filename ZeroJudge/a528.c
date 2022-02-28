#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM 1000
#define LEN 10100

char pos[NUM][LEN] = {'\0'};
char neg[NUM][LEN] = {'\0'};

int main()
{
    int task;
    while (~scanf("%d", &task)) {
        char *posP[NUM], *negP[NUM];
        int posC = 0, negC = 0;
        int i, j, k;
        for (i = 0; i < task; i++) {
            scanf("%s", pos[posC]);
            if (pos[posC][0] == '-') {
                strcpy(neg[negC], pos[posC]);
                negP[negC] = neg[negC];
                negC++;
            }
            else {
                posP[posC] = pos[posC];
                posC++;
            }
        }
        //input and separate into positive and negative numbers
        for (i = 0; i < posC; i++) {
            for (j = i + 1; j < posC; j++) {
                if (strlen(posP[i]) > strlen(posP[j])) {
                    char *tmp = posP[i];
                    posP[i] = posP[j];
                    posP[j] = tmp;
                }
                if (strlen(posP[i]) == strlen(posP[j])) {
                    for (k = 0; k < strlen(posP[i]); k++) {
                        if (posP[i][k] > posP[j][k]) {
                            char *tmp = posP[i];
                            posP[i] = posP[j];
                            posP[j] = tmp;
                            break;
                        }
                        else if (posP[i][k] < posP[j][k]) {
                            break;
                        }
                    }
                }
            }
        }
        //arrange positive numbers
        for (i = 0; i < negC; i++) {
            for (j = i + 1; j < negC; j++) {
                if (strlen(negP[i]) < strlen(negP[j])) {
                    char *tmp = negP[i];
                    negP[i] = negP[j];
                    negP[j] = tmp;
                }
                if (strlen(negP[i]) == strlen(negP[j])) {
                    for (k = 1; k < strlen(negP[i]); k++) {
                        if (negP[i][k] < negP[j][k]) {
                            char *tmp = negP[i];
                            negP[i] = negP[j];
                            negP[j] = tmp;
                            break;
                        }
                        else if (negP[i][k] > negP[j][k]) {
                            break;
                        }
                    }
                }
            }
        }
        //arrange negative numbers
        for (i = 0; i < negC; i++) {
            printf("%s\n", negP[i]);
        }
        for (i = 0; i < posC; i++) {
            printf("%s\n", posP[i]);
        }
    }

    return 0;
}
