#include <stdio.h>

#define max 5

void enqueue(int value);
void dequeue();
void display();

int front = -1;
int rear = -1;
int queue[max];

int main()
{
  enqueue(65);
  enqueue(34);
  enqueue(54);
  enqueue(65);
  enqueue(54);
  printf("\nOriginal Queue Elements :");
  display();

  dequeue();
  printf("\nAfter Dequeue Elements :");
  display();
}

void enqueue(int value)
{
  if (rear + 1 == max)
  {
    printf("\nOVERFLOW");
  }
  if (front == -1 && rear == -1)
  {
    front = 0;
    rear = 0;
  }
  else
  {
    rear = rear + 1;
  }
  queue[rear] = value;
}

void dequeue()
{
  if (front == -1 || front > rear)
  {
    printf("Empty");
  }
  else
  {
    int y;
    y = queue[front];
    if (front == rear)
    {
      front = -1;
      rear = -1;
    }
    else
    {
      front = front + 1;
    }
  }
}

void display()
{
  int i;
  if (front == -1)
  {
    printf("\nempty");
  }
  else
  {
    // printf("Queue elements :");
    for (i = front; i <= rear; i++)
    {
      printf("%d ", queue[i]);
    }
  }
}