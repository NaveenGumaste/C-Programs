#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void insertAtBegin(struct node **head, int data)
{
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  newNode->data = data;
  newNode->next = *head;
  *head = newNode;
}

void insertAtEnd(struct node **head, int data)
{
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  newNode->data = data;
  newNode->next = NULL;

  if (*head == NULL)
  {
    *head = newNode;
    return;
  }

  struct node *temp = *head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

void insertAtPosition(struct node **head, int data, int position)
{
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  newNode->data = data;

  if (position == 1)
  {
    newNode->next = *head;
    *head = newNode;
    return;
  }

  struct node *temp = *head;
  for (int i = 1; i < position - 1 && temp != NULL; i++)
  {
    temp = temp->next;
  }

  if (temp == NULL)
  {
    printf("Position out of range\n");
    return;
  }

  newNode->next = temp->next;
  temp->next = newNode;
}

void printList(struct node *node)
{
  while (node != NULL)
  {
    printf("\t%d", node->data);
    node = node->next;
  }
}

int main()
{
  struct node *head = NULL;

  insertAtBegin(&head, 10);
  insertAtBegin(&head, 20);
  insertAtEnd(&head, 30);
  insertAtEnd(&head, 40);
  insertAtPosition(&head, 50, 3);

  printf("Linked list:");
  //printf("\n\n");
  printList(head);

  return 0;
}
