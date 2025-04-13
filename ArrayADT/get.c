#include<stdio.h>
#include<stdlib.h>

struct Array{
    int *A;
    int length;
    int size;
};

void get(struct Array arr, int n){
    if(n >= 0 && n <= arr.length){
        printf("Element at %d index is %d.\n", n, arr.A[n]);
    }
    else{
        printf("No element at index %d.\n", n);
    }
}

int main(){
    struct Array arr;
    arr.length = 10;
    arr.size = 5;

    arr.A = (int *)malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++){
        arr.A[i] = 2*i;
    }

    get(arr, 3);
}
