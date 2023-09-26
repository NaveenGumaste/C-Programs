#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define SIZE 20

struct DataItem
{
  int data;
  int key;
};

struct DataItem *hashArray[SIZE];
struct DataItem *dummyItem;
struct DataItem *item;

int hashCode(int key)
{
  return key % SIZE;
}

struct DataItem *search(int key)
{
  int hashIndex = hashCode(key);

  while (hashArray[hashIndex] != NULL)
  {
    if (hashArray[hashIndex]->key == key)
    {
      return hashArray[hashIndex];
    }
    ++hashIndex;
    hashIndex %= SIZE;
  }

  return NULL;
}

void insert(int key, int data)
{
  struct DataItem *item = (struct DataItem *)malloc(sizeof(struct DataItem));
  item->data = data;
  item->key = key;

  int hashIndex = hashCode(key);
  while (hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1)
  {
    ++hashIndex;
    hashIndex %= SIZE;
  }

  hashArray[hashIndex] = item;
}

struct DataItem *delete(struct DataItem *item)
{
    int hashIndex;
  int key = item->key;

  hashIndex = hashCode(key);

  while (hashArray[hashIndex] != NULL)
  {
    if (hashArray[hashIndex]->key == key)
    {
      struct DataItem *temp = hashArray[hashIndex];
      hashArray[hashIndex] = dummyItem;
      return temp;
    }
    ++hashIndex;
    hashIndex %= SIZE;
  }

  return NULL;
}

void display()
{
  int i;

  for (i = 0; i < SIZE; i++)
  {
    if (hashArray[i] != NULL && hashArray[i]->key != -1)
    {
      printf("(%d, %d) ", hashArray[i]->key, hashArray[i]->data);
    }
  }

  printf("\n");
}

int main()
{
  dummyItem = (struct DataItem *)malloc(sizeof(struct DataItem));
  dummyItem->data = -1;
  dummyItem->key = -1;

  insert(1, 20);
  insert(2, 70);
  insert(42, 80);
  insert(4, 25);
  insert(14, 32);
  insert(17, 11);
  insert(13, 78);
  insert(37, 97);

  display();

  item = search(42);

  if (item != NULL)
  {
    printf("Item found: (%d %d )\n", item->key,item->data);
  }
  else
  {
    printf("Item not found\n");
  }

  delete (item);

  item = search(37);

  if (item != NULL)
  {
    printf("Item found: (%d %d)\n",item->key, item->data);
  }
  else
  {
    printf("Item not found\n");
  }

  return 0;
}
