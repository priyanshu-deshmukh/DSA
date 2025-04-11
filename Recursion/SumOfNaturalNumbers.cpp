#include<stdio.h>
int sumOfNaturalNumbers(int n){
	if(n > 0){
		return n + sumOfNaturalNumbers(n - 1);
	}
	else{
		return 0;
	}
}
int main(){
	int n, sum;
	
	printf("Enter the number of natural numbers: ");
	scanf("%d", &n);
	
	sum = sumOfNaturalNumbers(n);
	
	printf("Sum of first %d natural numbers = %d\n", n, sum);
}
