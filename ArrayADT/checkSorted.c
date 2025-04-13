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

void isSorted(struct Array arr){
    int counter = 0;
    for(int i = 0; i < arr.length - 1; i++){
        if(arr.A[i] >= arr.A[i+1]){
            counter = 0;
            break;
        }
        else{
            counter++;
        }
    }
    if(!counter){
        printf("Not sorted\n");
    }
    else{
        printf("Sorted\n");
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
    isSorted(arr);
    free(arr.A);
}