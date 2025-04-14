#include<stdio.h>
#include<stdlib.h>

struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    printf("\nElements of the array are: ");
    for(int i = 0; i < arr.length; i++){
        printf("%d\t", arr.A[i]);
    }
    printf("\n");
}

int isPresent(struct Array arr, int key) {

    for(int i = 0; i < arr.length; i++){
        if(arr.A[i] == key){
            return 1;
        }
    }
    return 0;
}

void unionUnsorted(struct Array arr1, struct Array arr2){
    struct Array arr;
    arr.size = arr1.length + arr2.length;
    arr.A = (int *) malloc(arr.size * sizeof(int));
    arr.length = 0;
    int i = 0;
    for(i = 0; i < arr1.length; i++){
        arr.A[i] = arr1.A[i];
        arr.length++;
    }
    for(i = 0; i < arr2.length; i++){
        if(!isPresent(arr1, arr2.A[i])){
            arr.A[arr.length++] = arr2.A[i];
        }
    }
    display(arr);
}

int main(){
    struct Array Ar1;
    Ar1.size = 10;
    Ar1.length = 5;
    Ar1.A = (int *)malloc(Ar1.length * sizeof(int));
    int temp1[] = {1,5,3,2,6};
    
    struct Array Ar2;
    Ar2.size = 10;
    Ar2.length = 5;
    Ar2.A = (int *)malloc(Ar2.length * sizeof(int));
    int temp2[] = {2,5,7,8,3};

    int i;
    for(i = 0; i < Ar1.length; i++){
        Ar1.A[i] = temp1[i];
    }

    for(i = 0; i < Ar2.length; i++){
        Ar2.A[i] = temp2[i];
    }
    display(Ar1);
    display(Ar2);

    unionUnsorted(Ar1, Ar2);
    free(Ar1.A);
    free(Ar2.A);
    return 0;
}