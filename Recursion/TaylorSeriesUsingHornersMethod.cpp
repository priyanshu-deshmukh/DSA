#include<stdio.h>
double e(int x, int n){
	static double s = 1;
	
	if(n == 0){
		return s ;
	}
	else{
		s = 1 + x*s/n;
		return e(x, n-1);
	}
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
