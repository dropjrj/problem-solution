#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LEN 1001

int main()
{
    char input, chrlist[LEN] = {'\0'};
    int totalLen = 0, count[LEN] = {0};
    while (scanf("%c", &input) != EOF) {
        if (isalpha(input)) {
            int i;
            input = tolower(input);
            for (i = 0; i < totalLen; i++) {
                if (chrlist[i] == input) {
                    count[i]++;
                    break;
                }
            }
            if (i == totalLen) {
                chrlist[totalLen] = input;
                count[totalLen++]++;
            }
        }
        else if (input == '\n') {
            int check = 0;
            for (int i = 0; i < totalLen; i++) {
                if (count[i] % 2 != 0) {
                    check++;
                    if (check == 2) break;
                }
            }
            if (check < 2) {
                printf("yes !\n");
            }
            else{
                printf("no...\n");
            }

            memset(count, 0, sizeof(count));
            memset(chrlist, 0, sizeof(chrlist));
            totalLen = 0;
        }
    }
    //該死的 EOF 結尾，說好的 \n 呢? 多這幾行蠢斃了
    int check = 0;
    for (int i = 0; i < totalLen; i++) {
        if (count[i] % 2 != 0) {
            check++;
            if (check == 2) break;
        }
    }
    if (check < 2) {
        printf("yes !\n");
    }
    else{
        printf("no...\n");
    }

    return 0;
}
