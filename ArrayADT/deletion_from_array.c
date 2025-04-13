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

void deletion(struct Array *arr, int index){
    if(index >= 0 && index < arr->length){
        int x = arr->A[index];
    int i;
    for(i = index; i < arr->length - 1; i++){
        arr->A[i] = arr->A[i + 1];
    }
    arr->length -= 1;

    printf("Deletion successful. New array: \n");
    display(*arr);
    }
    else{
        printf("Deletion not possible");
    }
}

int main(){
    struct Array arr;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));

    printf("Enter the number of elements: ");
    scanf("%d", &arr.length);

    printf("Enter the elements of the array: ");
    for(int i = 0; i < arr.length; i++){
        scanf("%d", &arr.A[i]);
    }

    int n;
    printf("Enter an index for deletion: ");
    scanf("%d", &n);
    deletion(&arr, n);
    free(arr.A);
    return 0;
}