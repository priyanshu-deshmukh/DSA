#include<stdio.h>
#include<stdlib.h>

struct Array{
    int *A;
    int length;
    int size;
};


void binarySearch(struct Array arr, int key) {
    int lb = 0;
    int ub = arr.length - 1;
    int mid;
    
    while (lb <= ub) {
        mid = (lb + ub) / 2;
        if (arr.A[mid] == key) {
            printf("Element found at index %d.\n", mid);
            return;
        } else if (arr.A[mid] < key) {
            lb = mid + 1;
        } else {
            ub = mid - 1;
        }
    }
    printf("Element not found in the array.\n");
}


int main() {
    struct Array arr;
    arr.size = 15;
    arr.length = 10;
    int temp[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; // Must be sorted for binary search
    arr.A = temp; // Assign statically allocated array

    int key = 11;
    binarySearch(arr, key);

    return 0;
}