#include<stdio.h>
int i = 1;
void TOH(int n, int a, int b, int c)
{	
	
	if(n > 0){
		TOH(n-1, a, c, b);
		printf("Move disk from tower%d to tower%d.\n", a, c);
		printf("Step %d\n", i);
		i++;
		TOH(n-1, b, a, c);
	}
}

int main()
{
	int n, a, b, c;
	printf("Enter the number of dicks: ");
	scanf("%d", &n);
	
	TOH(n, 1, 2, 3);
	return 0;
}
