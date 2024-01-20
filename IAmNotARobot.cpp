#include <stdio.h>

int main() {
	double A,B,C;
	scanf("%ld %ld", &A, &B);
	
	if(A>B){
		C = (B/A)*100;
		printf("%.4f%%\n", C);
	} else {
		printf("number b too big");
	}
	
	return 0;
}
