#include <stdio.h>

int main() {
	long A,B,C;
	scanf("%ld", &A);
	
	B=A+A;
	C=B-1;
	
	printf("%ld plus %ld is %ld\n", A, A, B);
	printf("minus one is %ld\n", C);
	
	return 0;
}
