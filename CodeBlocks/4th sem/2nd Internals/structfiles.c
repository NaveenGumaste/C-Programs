#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    FILE *fp;
  int i, j = 0;

    struct roll
{
  int num;
  char name[25];
};
  struct roll b1[45];
  struct roll *ptr;
  ptr = &b1;
  fp = fopen("file.txt", "w+");
  if (fp == NULL)
  {
    printf("Error opening file\n");
    exit(1);
  }

  printf("Roll and Name\n");
  for (i = 0; i <= 3; i++)
  {
    scanf("%d%s", &ptr->num, ptr->name);
    fprintf(fp,"%d%s", &ptr->num,ptr->name);
    ptr++;
  }
  fclose(fp);
  fp = fopen("file.txt,", "r");
  if (fp == NULL)
  {
    printf("Error opning the file\n");
    exit(1);
  }
  while ((fscanf(fp,"% d % s", &ptr->num, ptr->name)!= EOF))
  {
    if ("%d%s", ptr->num,ptr->name)
      ptr++;
  }
  fclose(fp);
  fp=fopen("file.txt","r");
  while((fscanf(fp,"%d%s",&ptr->num,ptr->name))!=EOF)
  {
    if (strcmp(ptr->name, "kit") == 0)
      j++, ptr++;
  }
  printf("\n kit appears %d times",j);
  fclose(fp);
  return 0;
}
