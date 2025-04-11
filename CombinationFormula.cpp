#include<stdio.h>

int c(int n, int r)
{
	if((n == r) || (r == 0))
	{
		return 1;
	}
	else
	{
		return c(n - 1, r - 1) + c(n - 1, r);
	}
}

int main()
{
	int n, r;
	printf("Enter n: ");
	scanf("%d", &n);
	
	printf("Enter r: ");
	scanf("%d", &r);
	
	if(n < r){
		printf("n can't be more than r!\n");
		return 0;
	}
	
	int answer = c(n, r);
	
	printf("%dC%d = %d", n, r, answer);
	return 0;
}
