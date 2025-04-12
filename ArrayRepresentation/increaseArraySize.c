#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p = (int *)malloc(4 * sizeof(int));   
    if(p == NULL){
        return 1;
    }
    //now increase the size of array
    int *q = (int *)malloc(10 * sizeof(int));
    if(q == NULL){
        return 1;
    }
    for(int i = 0; i < 5; i++){
        q[i] = p[i];
    }
    free(p);
    p = q;

    q = NULL;
    return 0;
}