#include <stdio.h>
#include <stdlib.h>

void print2DArray(int **arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Stack allocation
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("Array A (stack):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Partially in heap, partially in stack
    int *B[2];
    B[0] = (int *)malloc(3 * sizeof(int));
    B[1] = (int *)malloc(3 * sizeof(int));

    B[0][0] = 7; B[0][1] = 8; B[0][2] = 9;
    B[1][0] = 10; B[1][1] = 11; B[1][2] = 12;

    printf("\nArray B (mixed):\n");
    print2DArray(B, 2, 3);

    // Completely in heap
    int **C = (int **)malloc(2 * sizeof(int *)); // Allocate array of row pointers
    for (int i = 0; i < 2; i++) {
        C[i] = (int *)malloc(3 * sizeof(int));   // Allocate each row
    }

    C[0][0] = 13; C[0][1] = 14; C[0][2] = 15;
    C[1][0] = 16; C[1][1] = 17; C[1][2] = 18;

    printf("\nArray C (heap):\n");
    print2DArray(C, 2, 3);

    // Cleanup
    free(B[0]);
    free(B[1]);

    for (int i = 0; i < 2; i++) {
        free(C[i]);
    }
    free(C);

    return 0;
}
