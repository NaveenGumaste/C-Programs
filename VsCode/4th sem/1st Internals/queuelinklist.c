#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *front = NULL;
void enqueue(int);
void dequeue();
void display();
int main()
{
  enqueue(20);
  enqueue(30);
  enqueue(40);
  display();
  dequeue();
  dequeue();
  display();
}

void enqueue(int value)
{
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = value;
  newnode->next = NULL;
  if (front == NULL)
  {
    front = newnode;
  }
  else
  {
    struct node *temp = front;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newnode;
  }
}

void display()
{
  if (front == NULL)
  {
    printf("empty");
  }
  else
  {
    struct node *temp = front;
    printf("queue elements are:");
    while (temp != NULL)
    {
      printf("%d ", temp->data);
      temp = temp->next;
    }
  }
}

void dequeue()
{
  if (front == NULL)
  {
    printf("Empty");
  }
  else
  {
    if (front->next == NULL)
    {
      front = NULL;
    }
    else
    {
      struct node *temp = front;
      front = temp->next;
    }
  }
}