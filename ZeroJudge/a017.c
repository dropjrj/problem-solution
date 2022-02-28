#include <stdio.h>

#define LEN 1000

void inToPostfix(char* , char*);
int priority(char);
int calculate(char*);

int main(){
    char infix[LEN] = {'\0'}, postfix[LEN] = {'\0'};

    while(gets(infix) != NULL){
        inToPostfix(infix, postfix);
        printf("%d\n", calculate(postfix));
        for(int i = 0; i < LEN; i++){
            infix[i] = postfix[i] = '\0';
        }
    }

    return 0;
}

void inToPostfix(char *infix, char *postfix){
    char stack[LEN] = {'\0'};
    int top, postIndex, inIndex;
    for(top = postIndex = inIndex = 0; infix[inIndex] != '\0'; inIndex++){
        switch(infix[inIndex]){
            case '(':
                stack[++top] = infix[inIndex];
                break;
            case '+': case '-': case '*': case '/': case '%':
                while(priority(stack[top]) >= priority(infix[inIndex])){
                    postfix[postIndex++] = stack[top--];
                }
                stack[++top] = infix[inIndex];
                break;
            case ')':
                while(stack[top] != '('){
                    postfix[postIndex++] = stack[top--];
                }
                top--;
                break;
            default :
                postfix[postIndex++] = infix[inIndex];
        }
    }
    while(top > 0){
        postfix[postIndex++] = stack[top--];
    }
}

int priority(char op){
    switch(op){
        case '+': case '-': return 1;
        case '*': case '/': case '%': return 2;
        default : return 0;
    }
}

int calculate(char *postP){
    int stack[LEN] = {0};
    for(int i = 0; *postP != '\0'; postP++){
        switch(*postP){
            case ' ':
                break;
            case '+':
                i -= 2;
                stack[i] += stack[i + 1];
                i++;
                break;
            case '-':
                i -= 2;
                stack[i] -= stack[i + 1];
                i++;
                break;
            case '*':
                i -= 2;
                stack[i] *= stack[i + 1];
                i++;
                break;
            case '/':
                i -= 2;
                stack[i] /= stack[i + 1];
                i++;
                break;
            case '%':
                i -= 2;
                stack[i] %= stack[i + 1];
                i++;
                break;
            default :
                stack[i++] = strtol(postP, &postP, 10);
                postP--;
        }
    }
    return stack[0];
}
