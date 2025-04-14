#include<stdio.h>
#include<stdlib.h>
struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    printf("\nElements of the array are: \n");
    for(int i = 0; i < arr.length; i++){
        printf("%d\t", arr.A[i]);
    }
    printf("\n");
}

void normalDisplay(int a[], int n){
    printf("\nElements of the array are: ");
    for(int i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void merge(struct Array arr1, struct Array arr2){
    int arr[arr1.length + arr2.length];
    int i = 0, j = 0, k = 0;

    while(i < arr1.length && j < arr2.length){
        if(arr1.A[i] <= arr2.A[j]){
            arr[k++] = arr1.A[i++];
        }
        else{
            arr[k++] = arr2.A[j++];
        }
    }
    while(i < arr1.length) {
        arr[k++] = arr1.A[i++];
    }

    while(j < arr2.length) {
        arr[k++] = arr2.A[j++];
    }
    normalDisplay(arr, arr1.length + arr2.length);
}

int main(){
    struct Array arr1;
    arr1.size = 10;
    arr1.length = 4;
    arr1.A = (int *)malloc(10 * sizeof(int));

    int temp1[] = {1, 4, 5, 6};
    int temp2[] = {2, 4, 7, 8, 9};
    struct Array arr2;
    arr2.size = 10;
    arr2.length = 5;
    arr2.A = (int *)malloc(10 * sizeof(int));

    for(int i = 0; i < arr1.length; i++){
        arr1.A[i]=temp1[i];
    }
    
    for(int i = 0; i < arr2.length; i++){
        arr2.A[i]=temp2[i];
    }

    display(arr1);
    display(arr2);

    merge(arr1, arr2);
    return 0;
}