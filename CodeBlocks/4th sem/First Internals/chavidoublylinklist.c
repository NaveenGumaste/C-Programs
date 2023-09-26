#include<stdio.h>
#include<malloc.h>
void insertdoublybegin(int value);
void displayforward();
void displaybackward();
void insertionend(int value);
void deletebegin();
void insertposition(int value , int loc1,int loc2);
void deleteend();
void deleteposition(int value , int position);
struct node
{
struct node *next;
struct node *prev;
int data;
};
struct node *head=NULL;
struct node *tail=NULL;

int main()
{
    insertdoublybegin(7);
    insertdoublybegin(3);
    insertdoublybegin(5);
    printf("\n\nInsert at the Begin:");
    displayforward();
    printf("\nDisplay in backwards:");
    displaybackward();

    insertionend(77);
    printf("\n\nInsert at the End :");
    displayforward();
    printf("\nDisplay in backwards:");
    displaybackward();

    insertposition(44,7,3);
    printf("\n\nInsert at the Position :");
    displayforward();
    printf("\nDisplay in backwards:");
    displaybackward();

    deletebegin(5);
    printf("\n\n Delete at the Begin:");
    displayforward();
    printf("\nDisplay in backwards:");
    displaybackward();

    deleteend(77);
    printf("\n\n Delete at the End :");
    displayforward();
    printf("\nDisplay in backwards :");
    displaybackward();

    deleteposition(44,1);
    printf("\n\n Delete at the Position :");
    displayforward();
    printf("\nDisplay in backwards: ");
    displaybackward();

}

void insertdoublybegin(int value)
{
    struct node *newnode=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=head;
    tail=head;
    if(head==NULL)
    {
       head=newnode;
    }
    else
    {
        head->prev=newnode;
        newnode->next=head;
        head=newnode;
    }
}
void insertionend(int value)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
        newnode->prev=NULL;
    }
    else
    {
        struct node *temp =head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
    }
    void insertposition(int value,int loc1,int loc2)
{

    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->data=value;
    newnode->next=head;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node *temp=head,*storenode;
    while(temp->data!=loc1 && temp->data!=loc2)
    {
        temp=temp->next;
        storenode=temp->next;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
    storenode->prev=newnode;

    }
}
void deletebegin(int value)
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    else
    {
        if( head->next==NULL)
        {
             head=NULL;
             free(temp);
        }

        else
        {
            head=temp->next;
            free(temp);
        }
    }
}
void deleteend(int value)
{

struct node *temp=head;
    struct node *temp2=head;
    if(head==NULL)
    {
        printf("LIST IS EMPTY\n");
    }
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {

    while(temp->next!=NULL)
    {
        temp2=temp;
        temp=temp->next;
    }
    temp2->next=NULL;
    free(temp);
    temp=NULL;
    }
}
void deleteposition(int value, int position)
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



void displayforward()
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("THE LIST IS EMPTY\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf(" %d ",temp->data);
            temp=temp->next;
        }

    }
}


void displaybackward()
{
    struct node *tail=head;
    if(head==NULL)
    {
        printf("THE LIST IS EMPTY\n");
    }
    else
    {
        //printf("\n backward elements are:\n");
        while(tail->next!=NULL)
        {

            tail=tail->next;
        }

        while(tail!=head)
        {
            printf(" %d ",tail->data);
            tail=tail->prev;
        }

         printf(" %d ",tail->data);

    }
}
