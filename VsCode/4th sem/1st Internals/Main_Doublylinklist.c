#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
  int data;
  struct node *prev;
  struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void insertdoublybegin(int value);
void insertdoublyend(int value);
void insertdoublylocation(int value, int position);

void deletebegin(int value);
void deletend(int value);
void deleteposition(int value, int position);

void displayforward();
void displaybackward();

int main()
{
  struct node *head = NULL;
  insertdoublybegin(500);
  insertdoublybegin(300);
  insertdoublybegin(200);
  insertdoublybegin(100);
  printf("\n\n Insert at the Begin: ");
  displayforward();
  printf(" Displaying Backwards: ");
  displaybackward();

  insertdoublyend(600);
  printf("\n\n Insert at the End: ");
  displayforward();
  printf(" Displaying Backwards: ");
  displaybackward();

  insertdoublylocation(400, 4);
  printf("\n\n Insert at the Position: ");
  displayforward();
  printf(" Displaying Backwards: ");
  displaybackward();

  //? Deleting process begins here

  printf("\n\n\t Deleting process begins here\n");

  deletebegin(300);
  printf("\n\n Delete at the begin: ");
  displayforward();
  printf(" Displaying Backwards: ");
  displaybackward();

  deletend(600);
  printf("\n\n Delete at the End: ");
  displayforward();
  printf(" Displaying Backwards: ");
  displaybackward();

  deleteposition(400, 3);
  printf("\n\n Delete at the Position: ");
  displayforward();
  printf(" Displaying Backwards: ");
  displaybackward();

  return 0;
}

//~ Doubly Insert Process begins here

void insertdoublybegin(int value)
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = value;
  newnode->prev = NULL;
  newnode->next = head;

  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
  }
  else
  {
    head->prev = newnode;
    head = newnode;
  }
}

void insertdoublyend(int value)
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = value;
  newnode->prev = tail;
  newnode->next = NULL;

  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
  }
  else
  {
    tail->next = newnode;
    tail = newnode;
  }
}

void insertdoublylocation(int value, int position)
{
  struct node *newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = value;
  newnode->prev = NULL;
  newnode->next = NULL;

  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
  }
  else
  {
    struct node *current = head;
    int i;
    for (i = 1; i < position - 1 && current != NULL; i++)
    {
      current = current->next;
    }
    if (current == NULL)
    {
      printf("Position out of range.\n");
      return;
    }
    newnode->prev = current;
    newnode->next = current->next;
    if (current->next == NULL)
    {
      tail = newnode;
    }
    else
    {
      current->next->prev = newnode;
    }
    current->next = newnode;
  }
}

// # Deleting processes starts here

void deletebegin(int value)
{
  if (head == NULL)
  {
    printf("List is empty.\n");
    return;
  }
  struct node *temp = head;
  head = head->next;
  if (head == NULL)
  {
    tail = NULL;
  }
  else
  {
    head->prev = NULL;
  }
  free(temp);
}

void deletend(int value)
{
  if (head == NULL)
  {
    printf("List is empty.\n");
    return;
  }
  struct node *temp = tail;
  tail = tail->prev;
  if (tail == NULL)
  {
    head = NULL;
  }
  else
  {
    tail->next = NULL;
  }
  free(temp);
}

void deleteposition(int value, int position)
{
  if (head == NULL)
  {
    printf("List is empty.\n");
    return;
  }
  struct node *current = head;
  int i;
  for (i = 1; i < position && current != NULL; i++)
  {
    current = current->next;
  }
  if (current == NULL)
  {
    printf("Position out of range.\n");
    return;
  }
  if (current == head)
  {
    head = current->next;
  }
  else
  {
    current->prev->next = current->next;
  }
  if (current == tail)
  {
    tail = current->prev;
  }
  else
  {
    current->next->prev = current->prev;
  }
  free(current);
}

//* Display Functions

void displayforward()
{
  if (head == NULL)
  {
    printf("doubly link list is empty");
  }
  else
  {
    struct node *temp = head;
    while (temp->next != NULL)
    {
      printf("%d  ", temp->data);
      temp = temp->next;
    }
    printf("%d  \n", temp->data);
  }
}

void displaybackward()
{
  struct node *tail = head;
  if (head == NULL)
  {
    printf("THE LIST IS EMPTY\n");
  }
  else
  {
    while (tail->next != NULL)
    {

      tail = tail->next;
    }

    while (tail != head)
    {
      printf(" %d ", tail->data);
      tail = tail->prev;
    }

    printf(" %d ", tail->data);
  }
}