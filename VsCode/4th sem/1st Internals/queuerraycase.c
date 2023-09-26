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
  printf("1 To Insert  a Node \n");
  printf("2 To Delete a Node\n");
  printf("3 To Exit\n");
  while (1)
  {
    {
      printf("\nEnter your choice:");
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
        printf("\nQueue elements  :");
        printList();
        break;

      case 2:
        dequeue();
        dequeue();
        printf("\n After dequeue the new Queue :\n");
        printList();
        break;

      case 3:
        return 0;
        break;

      default:
        printf("Wrong Choice\n");
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
