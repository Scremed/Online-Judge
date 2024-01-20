#include<stdio.h>

int main() {
	long X;
	double Y, base, result=1, hasil;
	
	scanf("%ld %lf", &X, &Y);
	base = Y*0.01 + 1;
	
	for(int i=0;i<3; i++) {
		result *= base;
	}
	
	hasil = X*result;
	
	printf("%.2f\n", hasil);
	return 0;
}
