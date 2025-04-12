//this is a C program that demonstrates variable length array [VLA] declaration since it was introduced in C99 standard.
//VLA is not allowed in C89/C90 standard {ANSI C} but newer destributions allow it.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int *p;
	
	p = (int *)malloc(n * sizeof(int));
	
	if(p == NULL){
		return 1;
	}
	
	for(int i=0; i <n; i++){
		scanf("%d", &p[i]);
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d", p[i]);
	}
	
	free(p);
	return 0;
}
