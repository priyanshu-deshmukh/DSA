#include<stdio.h>
#include<stdlib.h>

struct Array{
    int * A;
    int size;
    int length;
};

void display(struct Array arr){
    int i;
    printf("Elements are: \ncurrent length = %d\n",arr.length);
    for(i = 0; i < arr.length; i++){
        printf("%d\t",arr.A[i]);
    }
    printf("\n");
}

void insert(struct Array *arr, int index, int ele){
    if(index <= arr->length && index < arr->size){
        int i;
    for(i = arr->length; i > index; i--){
        arr->A[i] = arr->A[i - 1];
    }
    arr->A[i] = ele;
    arr->length++;
    }
    else{
        printf("Not possible\n");
    }
}

int main()
{
    struct Array arr;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);

    printf("Enter the number of elements: ");
    scanf("%d", &arr.length);

    arr.A = (int *)malloc(arr.size * sizeof(int));

    printf("Enter the elements of the array: ");
    for(int i = 0; i < arr.length; i++){
        scanf("%d", &arr.A[i]);
    }

    display(arr);
    int n, pos;
    printf("Enter a number to append: ");
    scanf("%d", &n);
    printf("Enter index: ");
    scanf("%d",&pos);
    insert(&arr, pos, n);
    display(arr);

    return 0;
}
