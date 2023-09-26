#include <stdio.h>
#include <time.h>

#define ROWS 3
#define COLS 3

void add_matrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS])
{
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      result[i][j] = mat1[i][j] + mat2[i][j];
    }
  }
}
void display_matrix(int mat[][COLS])
{
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {

      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  clock_t start = clock();
  int mat1[ROWS][COLS] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};
  int mat2[ROWS][COLS] = {{9, 8, 7},
                          {6, 5, 4},
                          {3, 2, 1}};

  int result[ROWS][COLS];
  add_matrices(mat1, mat2, result);
  printf("Matrix 1:\n");
  display_matrix(mat1);
  printf("Matrix 2:\n");
  display_matrix(mat2);
  printf("Sum of matrices:\n");
  display_matrix(result);
  clock_t end = clock();
  double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
  printf("\nExecution time without macros optimization=%.4f seconds\n", time_taken);
  return 0;
}