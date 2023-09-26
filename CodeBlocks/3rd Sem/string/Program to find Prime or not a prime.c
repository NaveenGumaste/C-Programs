#include <stdio.h>

main() {
  int num, i, c = 0;
  printf("Enter any number:");
  scanf("%d", &num);

    for (i = 1; i <= num; i++) {
      if (num % i == 0) {
         c++;
      }
  }

  if (c == 2) {
        printf("\n Given num is a Prime number \n");
  }
  else {
         printf("\n Given num is not a Prime number \n");
  }
  return 0;
}
