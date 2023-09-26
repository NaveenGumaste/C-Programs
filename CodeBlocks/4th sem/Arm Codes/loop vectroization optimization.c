#include <stdio.h>
#include <time.h>
#include <immintrin.h>  // Include the necessary header for SIMD intrinsics
#define ARRAY_SIZE 10

void array_multiply(int arr1[], int arr2[], int result[], int size) {
    // Use SIMD intrinsics for loop vectorization
    for (int i = 0; i < size; i += 4) {
        __m128i vec1 = _mm_loadu_si128((__m128i*)&arr1[i]);
        __m128i vec2 = _mm_loadu_si128((__m128i*)&arr2[i]);
        __m128i vec_result = _mm_mullo_epi32(vec1, vec2);
        _mm_storeu_si128((__m128i*)&result[i], vec_result);
    }
}

void array_print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[ARRAY_SIZE];
    int arr2[ARRAY_SIZE];
    int result[ARRAY_SIZE];
    clock_t start = clock(); // Start measuring the time

    // Initialize arrays with values from 1 to ARRAY_SIZE
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr1[i] = i + 1;
        arr2[i] = i + 1;
    }

    printf("Array 1: ");
    array_print(arr1, ARRAY_SIZE);

    printf("\nArray 2: ");
    array_print(arr2, ARRAY_SIZE);

    array_multiply(arr1, arr2, result, ARRAY_SIZE);

    printf("\nResult Array: ");
    array_print(result, ARRAY_SIZE);
    clock_t end = clock(); // Stop measuring the time

    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nExecution Time: %f seconds\n", cpu_time_used);

    return 0;
}
