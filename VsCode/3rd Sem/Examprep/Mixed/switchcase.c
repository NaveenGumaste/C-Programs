#include <stdio.h>
int main()
{
  int age, choice, name, kid;
  printf("Enter the choice:");
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    printf("Enter the Age:");
    scanf("%d", &age);

    if (age < 15)
      printf("You are Kid.");
    else
      printf("You are Adult.");
    break;
  case 2:
    printf("Enter your name:");
    scanf("%s", name);
    if (name != kid)
      printf("You are name is not kid.");
    else
      printf("You are a kid");
    break;
  default:
    printf("You are Dead.");
    break;
  }
  return 0;
}
