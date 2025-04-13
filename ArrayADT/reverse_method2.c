#include<stdio.h>
#include<stdlib.h>

struct Array{
    int * A;
    int size;
    int length;
};

void display(struct Array arr){
    int i;
    printf("\nElements are: \n");
    for(i = 0; i < arr.length; i++){
        printf("%d\t",arr.A[i]);
    }
    printf("\n");
}

void reverse2(struct Array *arr){
    int auxi[arr->length];
    int i, j;
    for(i = 0, j = arr->length - 1; i < arr->length; i++, j--){
        auxi[j] = arr->A[i];
    }
    for(i = 0; i < arr->length; i++){
        arr->A[i] = auxi[i];
    }
}

void swap(int *a, int *b){
    *a = *a ^ *b ^ (*b = *a);
}

void reverse(struct Array *arr){
    int i, j;
    for(i = 0, j - arr->length - 1; i < j; i++, j--){
        swap(&arr->A[i], &arr->A[j]);
    }
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
    reverse2(&arr);
    printf("After reversing the array: ");
    display(arr);
    free(arr.A);
}