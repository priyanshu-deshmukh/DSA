#include<stdio.h>
#include<stdlib.h>

struct Array{
    int * A;
    int size;
    int length;
};

void display(struct Array arr){
    int i;
    printf("Elements are: \n");
    for(i = 0; i < arr.length; i++){
        printf("%d\t",arr.A[i]);
    }
    printf("\n");
}

void insertInSortedArray(struct Array *arr, int val){
    int i = arr->length - 1;

    while(i >= 0 && arr->A[i] > val){
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->length++;
    arr->A[i + 1] = val;
}

int main(){
    int n, i;
    struct Array arr;
    printf("Enter the size of the array: ");
    scanf("%d",&arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr.length = n;  
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++){
        scanf("%d",&arr.A[i]);
    }

    display(arr);
    insertInSortedArray(&arr, 11);
    display(arr);
    free(arr.A);
}