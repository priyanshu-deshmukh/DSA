#include<stdio.h>

double e(int x, int n){
	static double p = 1, f = 1;
	double r;
	
	if(n == 0){
		return 1;
	}
	
	r = e(x, n-1);
	p = p * x;
	f = f * n;
	return r + p/f;
		
}

int main(){
	int n, x;
	printf("Enter the power of e: ");
	scanf("%d", &x);
	printf("Enter the number of terms to calculate: ");
	scanf("%d", &n);
	
	printf("The value of e power %d evaluated till %d terms is %lf,\n", x, n, e(x, n));
	return 0;
}
