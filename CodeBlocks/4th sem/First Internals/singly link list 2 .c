#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
  int data;
  struct node *next;
};
struct node *head = NULL;

void insertbegin(int value);

void insertend(int value);

void insertposition(int value, int position);

void display();

int main()

{
  insertbegin(5);
  insertbegin(6);
  insertbegin(4);
  insertbegin(2);
  insertend(17);
  insertend(16);
  insertend(19);
  insertposition(13, 18);
  display();

  return 0;
}

void insertbegin(int value)
{
  struct node *newnode;

  newnode = (struct node *)malloc(sizeof(struct node));

  newnode->data = value;

  if (head == NULL)
  {
    newnode->next = NULL;
    head = newnode;
  }
  else
  {
    newnode->next = head;
    head = newnode;
  }
}

void insertend(int value)

{

  struct node *newnode;

  newnode = (struct node *)malloc(sizeof(struct node));

  newnode->data = value;

  newnode->next = NULL;

  if (head == NULL)
  {
    head = newnode;
  }
  else
  {

    struct node *temp = head;

    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newnode;
  }
}

void insertposition(int value, int position)
{

  struct node *newnode;

  newnode = (struct node *)malloc(sizeof(struct node));

  newnode->data = value;

  newnode->next = NULL;

  if (position == 1)
  {
    newnode->next = head;
    head = newnode;
  }
  struct node *temp = head;
  for (int i = 1; i < position - 1 && temp != NULL; i++)
  {
    temp = temp->next;
  }

  if (temp == NULL)
  {
    printf("Position out of range\n");
  }
}

void display()
{
  if (head == NULL)
  {
    printf("\nlink list is empty");
  }
  else
  {
    struct node *temp = head;

    printf("singly list elements are:\n");

    while (temp->next != NULL)
    {
      printf(" %d ", temp->data);

      temp = temp->next;
    }
    printf("%d ", temp->data);
  }
}
