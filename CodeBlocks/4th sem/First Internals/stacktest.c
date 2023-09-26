#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

void push(int x);
void pop();
void display();

int top = -1;
int stackarray[SIZE];

int main()
{
  push(8);
  push(6);
  push(4);
  push(2);
  push(0);
  printf("\n The pushed elements are:");
  display();

  pop();
  pop();
  printf("\n The poped elements are:");
  display();
}

void push(int x)
{
  if (x == SIZE - 1)
  {
    printf("\n the stack is empty\n");
  }
  else
  {
    stackarray[top] = x;
    top = top + 1;
  }
}
void pop()
{
  if (top==-1)
  {
      printf("\n Stack is empty");
  }
  else
  {
    printf("%d", stackarray[top]);
    top = top - 1;
  }
}

void display()
{
  int i;
  if (top==-1)
  {
    printf("\n The stack is empty\n");
  }
  else
  {
    for (i = top; i >= 0; --i)
    {
       printf("%d",stackarray[i]);

    }
  }
}
