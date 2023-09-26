#include <stdio.h>
#include <time.h>

#define SIZE 1000

void loop_interchange(int array[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            array[i][j] = i + j;
        }
    }
}

int main() {
    int array[SIZE][SIZE];
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    // Original loop order
    loop_interchange(array);

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Execution Time (Original): %f seconds\n", cpu_time_used);

    start = clock();

    // Loop interchange
    for (int j = 0; j < SIZE; j++) {
        for (int i = 0; i < SIZE; i++) {
            array[i][j] = i + j;
        }
    }

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Execution Time (Loop Interchange): %f seconds\n", cpu_time_used);

    return 0;
}
