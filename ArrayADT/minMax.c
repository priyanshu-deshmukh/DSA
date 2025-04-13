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

void min(struct Array arr){
    int n;
    n = arr.A[0];
    for(int i = 0; i < arr.length; i++){
        if(arr.A[i] > n){
            n = arr.A[i];
        }
        else{
            continue;
        }
    }
    printf("Max element = %d.\n", n);
}

void max(struct Array arr){
    int n;
    n = arr.A[0];
    for(int i = 0; i < arr.length; i++){
        if(arr.A[i] < n){
            n = arr.A[i];
        }
        else{
            continue;
        }
    }
    printf("Min element = %d.\n", n);
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
    max(arr);
    min(arr);
    free(arr.A);
}