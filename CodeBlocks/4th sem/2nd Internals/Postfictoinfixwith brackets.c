#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char stack[50];
int top=-1;

void push(char ch)
{
    stack[++top]=ch;
}

char pop()
{
    return stack[top--];
}

void convert(char exp[])
{
    int l, i, j = 0;
    char temp[50];
    l = strlen(exp);
    for (i = 0; i < 50; i++) {
        stack[i] = '\0';
    }
    printf("\nThe Infix Expression is : ");
    for (i = 0; i < l; i++) {
        if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/') {
            push(exp[i]);
        } else if (exp[i] == ')') {
            temp[j++] = pop();
            temp[j++] = exp[i];
        } else if (exp[i] == '(') {
            temp[j++] = exp[i];
            temp[j++] = pop();
        } else {
            temp[j++] = exp[i];
        }
    }
    while (top != -1) {
        temp[j++] = pop();
    }
    temp[j] = '\0';
    strrev(temp);
    puts(temp);
}


int main()
{
    char exp[50];

    printf("\nEnter the Postfix Expression : ");
    gets(exp);
    convert(exp);
    return 0;
}
