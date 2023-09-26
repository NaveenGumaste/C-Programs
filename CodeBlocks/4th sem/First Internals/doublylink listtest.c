#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    struct node *next;
    int data;
};
struct node *head=NULL;
struct node *tail=NULL;

void insertdoublybegin(int value);
void displayforward();
void displybackward();

int main()
{
    insertdoublybegin(3);
    insertdoublybegin(7);
    insertdoublybegin(12);
    insertdoublybegin(78);
    displayforward();
    displybackward();

    return 0;

}

void insertdoublybegin(int value)
{
    struct node *newnode=head;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next=head;
    newnode->prev=NULL;

    if(head==NULL)
    {
    head = newnode;
    }
    else
    {
    head->prev=newnode;
    newnode->next=head;
    head=newnode;

    }
}

void displayforward()
{
  if (head == NULL)
  {
    printf("\nlist is empty");
  }
  else
  {
    struct node *temp = head;

    printf("Doubly list elements are:\n\n");

    while (temp->next != NULL)
    {
      printf(" %d ", temp->data);

      temp = temp->next;
    }
    printf("%d ", temp->data);
  }
}

void displybackward()
{
    if (head == NULL)
  {
    printf("\nlist is empty");
  }
  else
  {
  struct node *temp = head;
  printf("\nDisplay in backward direction\n");
  while (tail != head)
  {
    printf(" %d ", tail->data);
    tail = temp;
    tail = tail->next;
  }
}
}
