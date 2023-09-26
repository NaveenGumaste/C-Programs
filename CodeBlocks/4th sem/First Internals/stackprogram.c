#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int top=-1;

int stackarray[SIZE];

void push(int value);
void pop();
void display();
int main()
{
    push(33);
    push(8);
    push(5);
    push(9);
    push(35);
    printf("\n The pushed elements are:");
    display();

    pop();
    printf("\n The poped elements are:");
    display();
}

void push(int value)
{
    if(top==SIZE )
    {
        printf("STACK IS FULL\n");
    }
    else
    {
        top=top+1;
        stackarray[top]=value;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("EMPTY STACK\n");
    }
    else
    {
        printf("POPPED ELEMENT:%d \n ",stackarray[top]);
        top=top-1;

    }
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("EMPTY STACK!!\n");
    }
    else
    {
        printf("The Stack ELements are:\n");
        for(i=top;i>=0;--i)
        {
            printf("%d ",stackarray[i]);
        }
    }
}
