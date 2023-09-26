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
void insertposition(int value, int loc1, int loc2);

void deletebegin(int value);
void deletend(int value);
void deleteLocation(int value, int position);

void display();

int main()

{
  insertbegin(3);
  insertbegin(2);
  insertbegin(1);
  printf("\nOriginal linked list: \n");
  display();
  insertend(40);
  printf("\n\nLinked list after insert at end: \n");
  display();
  insertposition(4, 2, 3);
  printf("\n\nLinked list after insert at the locations: \n");
  display();

  // Deleting process begins here
  deletebegin(3);
  printf("\n\nLinked list after deleting node at the begin: \n");
  display();
  deletend(40);
  printf("\n\nLinked list after deleting node at the end: \n");
  display();
  deleteLocation(2, 0);
  printf("\n\nLinked list after deleting node at the location/position: \n");
  display();

  return 0;
}

// # Creating the link list and function to add at the end then at the beginning and at the positions/locations

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

void insertposition(int value, int loc1, int loc2)
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = value;
  newnode->next = NULL;

  if (head == NULL)
  {
    newnode->next = head;
    head = newnode;
  }
  else
  {
    struct node *temp = head;

    while (temp->data != loc1 && temp->data != loc2)
    {
      temp = temp->next;
      newnode->next = temp->next;
      temp->next = newnode;
    }
  }
}

//* Deleting the elements from the link list.

void deletebegin(int value)
{

  if (head == NULL)
  {
    printf("List is empty");
  }
  else
  {
    struct node *temp = head;
    if (head->next == NULL)
    {
      head = NULL;
      free(temp);
    }
    else
    {
      head = temp->next;
      free(temp);
    }
  }
}

void deletend(int value)
{
  if (head == NULL)
  {
    printf("List is empty.\n");
    return;
  }
  if (head->next == NULL)
  {
    free(head);
    head = NULL;
    return;
  }
  struct node *temp = head;
  struct node *previous = NULL;
  while (temp->next != NULL)
  {
    previous = temp;
    temp = temp->next;
  }
  free(temp);
  previous->next = NULL;
}

void deleteLocation(int value, int position)
{
  if (head == NULL)
  {
    printf("List is empty.\n");
    return;
  }
  struct node *temp = head;
  struct node *previous = NULL;
  if (position == 0)
  {
    head = temp->next;
    free(temp);
    return;
  }
  int count = 0;
  while (temp != NULL && count != position)
  {
    previous = temp;
    temp = temp->next;
    count++;
  }
  if (temp == NULL)
  {
    printf("Position out of range.\n");
    return;
  }
  previous->next = temp->next;
  free(temp);
}

//? Display function of the link list

void display()
{
  if (head == NULL)
  {
    printf("\nlist is empty");
  }
  else
  {
    struct node *temp = head;

    //printf("singly list elements are:\n\n");

    while (temp->next != NULL)
    {
      printf(" %d ", temp->data);

      temp = temp->next;
    }
    printf("%d ", temp->data);
  }
}
