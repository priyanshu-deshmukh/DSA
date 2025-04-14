#include<stdio.h>

void swap(int *A, int *B){
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}

void display(int a[], int size){
    printf("Elements of the array are: ");
    for(int i = 0; i < size; i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
}

void shiftNegatives(int *A, int size){
    int i = 0; int j = size-1;
    while(i < j){
        while(A[i] < 0) i++;
        while(A[j] >= 0) j--;
        if(i < j){
            swap(&A[i], &A[j]);
        }
    }
}

int main(){
    int arr[] = {1,3,2,5,-1, 42, -4, -5, 8};
    display(arr, 9);
    shiftNegatives(arr, 9);
    display(arr, 9);
    return 0;
}