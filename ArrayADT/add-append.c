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

void append(struct Array *arr, int ele) //when passing structure array, only a copy of arr will be passed, and the changes in the append() function will not be reflected inside main function. So, we pass a pointer to struct Array.
{
    arr->A[arr->length] = ele;
    arr->length++;
}

int main(){
    struct Array arr;
    
    printf("Enter the size of array: ");
    scanf("%d",&arr.size);

    printf("Enter the number of elements in the array: ");
    scanf("%d",&arr.length);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    printf("Enter the elements of the array: ");
    for(int i = 0; i < arr.length; i++){
        scanf("%d",&arr.A[i]);
    }

    display(arr);

    append(&arr, 20);

    display(arr);

}