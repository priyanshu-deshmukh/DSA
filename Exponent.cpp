#include<stdio.h>
int pow(int m, int n){
	if(n == 0){
		return 1;
	}
	else{
		return m * pow(m, n-1);
	}
}
int main(){
	int m, n;
	int answer;
	
	printf("Enter base: ");
	scanf("%d", &m); 
	
	printf("Enter power: ");
	scanf("%d", &n);
	
	answer = pow(m, n);
	
	printf("%d to the power %d is %d.\n", m, n, answer);
	return 0;
}
