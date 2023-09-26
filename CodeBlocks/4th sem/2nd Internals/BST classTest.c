#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
  int key;
  struct node *left;
  struct node *right;
};

struct node *newnode(int item)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}
void inorder(struct node *root)
{
  if (root != NULL)
  {
    inorder(root->left);
    printf(" %d ", root->key);
    inorder(root->right);
  }
}

void preorder(struct node *root)
{
  if (root != NULL)
  {
    printf(" %d ", root->key);
    preorder(root->left);
    preorder(root->right);
  }
}

void postorder(struct node *root)
{
  if (root != NULL)
  {
    postorder(root->left);
    postorder(root->right);
    printf(" %d ", root->key);
  }
}

struct node *insert(struct node *root, int key)
{
  if (root == NULL)
    return newnode(key);
  if (key < root->key)
    root->left = insert(root->left, key);
  else
    root->right = insert(root->right, key);
  return root;
}

struct node *deletenode(struct node *root, int key)
{
  if (root == NULL)
    return root;
  if (key < root->key)
    root->left = deletenode(root->left, key);
  else if (key > root->key)
    root->right = deletenode(root->right, key);
  else
  {
    if (root->left == NULL)
    {
      struct node *temp = root->right;
      free(root);
      return temp;
    }
    else if (root->right == NULL)
    {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
  }
}

int main()
{
  int key;
  struct node *root = NULL;
  root = insert(root, 50);
  root = insert(root, 15);
  root = insert(root, 62);
  root = insert(root, 5);
  root = insert(root, 20);
  root = insert(root, 58);
  root = insert(root, 91);
  root = insert(root, 8);
  root = insert(root, 37);
  root = insert(root, 60);
  root = insert(root, 24);
  printf("\n\nInorder traversal of the binary search tree: \n");
  inorder(root);

  printf("\n\nPreorder traversal of the binary search tree: \n");
  preorder(root);

  printf("\n\nPostorder traversal of the binary search tree: \n");
  postorder(root);


  root = deletenode(root, 5);
  printf("\n Delete 15\n");

  printf("\n Delete 50\n");
  root = deletenode(root, 50);

  printf("Deleted node with key %d\n", key);

  return 0;
}
