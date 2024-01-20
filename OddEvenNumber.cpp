#include <stdio.h>

int main() {
	long A;
	scanf("%ld", &A);
	
	if(A%2 != 1){
		printf("EVEN\n");
	} else {
		printf("ODD\n");
	}
	
	return 0;
}
