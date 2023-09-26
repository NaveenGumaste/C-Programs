#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *front = NULL, *rear = NULL;
void enqueue(int val);
void dequeue();
void printList();
int main()
{
  int choice;
  printf("1 TO INSERT  A NODE \n");
  printf("2 TO DELETE A NODE\n");
  while (1)
  {
  {
    printf("\nENTER YOUR CHOICE:\n");
    scanf("%d", &choice);
    switch (choice)
    {

    case 1:
      enqueue(10);
      enqueue(20);
      enqueue(30);
      enqueue(40);
      enqueue(50);
      enqueue(60);
      printf(" Queue elements  :\n");
      printList();

      break;

    case 2:
      dequeue();
      dequeue();
      printf("\n After dequeue the new Queue :\n");
      printList();
      break;

    default:
      printf("INVALID INPUT\n");
      break;
    }
  }
  }
  return 0;
}
void enqueue(int val)
{
  struct node *newNode = malloc(sizeof(struct node));
  newNode->data = val;
  newNode->next = NULL;
  if (front == NULL && rear == NULL)
    front = rear = newNode;
  else
  {

    rear->next = newNode;

    rear = newNode;
  }
}

void dequeue()
{
  struct node *temp;

  if (front == NULL)
    printf("Queue is Empty. Unable to perform dequeue\n");
  else
  {

    temp = front;
    front = front->next;
    if (front == NULL)
      free(temp);
  }
}

void printList()
{
  struct node *temp;
  temp = front;

  while (temp)
  {
    printf(" %d", temp->data);
    temp = temp->next;
  }
}
