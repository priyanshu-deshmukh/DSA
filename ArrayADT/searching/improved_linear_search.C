#include<stdio.h>
#include<stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

void swap(int *a, int *b){
    *a = *a ^ *b ^ (*b = *a);
}

void display(struct Array arr){
    int i;
    printf("Elements are: \n");
    for(i = 0; i < arr.length; i++){
        printf("%d\t",arr.A[i]);
    }
    printf("\n");
}

void linearSearch(struct Array *arr, int key) {
    for (int i = 0; i < arr->length; i++) {
        if (arr->A[i] == key) {
            printf("Element found at index %d.\n", i);
            if (i > 0) {
                swap(&arr->A[i], &arr->A[i - 1]); // Transposition
            }
            return;
        }
    }
    printf("Element is not present in the array.\n");
}

int main(void){
    struct Array arr;
    arr.size = 10;
    arr.length = 7;
    arr.A = (int *)malloc(arr.size * sizeof(int));
    
    int temp[] = {1, 4, 2, 3, 6, 7, 5};
    for(int i = 0; i < arr.length; i++) {
        arr.A[i] = temp[i];
    }
    display(arr);
    linearSearch(&arr, 3);
    linearSearch(&arr, 3);
    linearSearch(&arr, 3);
    linearSearch(&arr, 3);
    linearSearch(&arr, 3);

    free(arr.A);
    return 0;
}