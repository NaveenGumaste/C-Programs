#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100
#define BLOCK_SIZE 10

int main() {
    int i, j, ii, jj, k;
    int matrix[SIZE][SIZE];
    int sum = 0;

    // Initialize the matrix with random values
    srand(time(NULL));
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 100;
        }
    }

    // Loop overhead interchange with loop tiling (blocking)
    clock_t start_time = clock();
    for (i = 0; i < SIZE; i += BLOCK_SIZE) {
        for (j = 0; j < SIZE; j += BLOCK_SIZE) {
            for (ii = i; ii < i + BLOCK_SIZE; ii++) {
                for (jj = j; jj < j + BLOCK_SIZE; jj++) {
                    sum += matrix[ii][jj];
                }
            }
        }
    }
    clock_t end_time = clock();

    // Calculate elapsed time
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Print the sum and elapsed time
    printf("Sum: %d\n", sum);
    printf("Elapsed Time: %f seconds\n", elapsed_time);

    return 0;
}
