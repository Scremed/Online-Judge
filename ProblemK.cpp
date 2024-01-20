#include <stdio.h>

int main(){
	char N[101];
	char A[9];
	int U;
	scanf("%[^\n]s", &N);
	scanf("%s %d", &A, &U);
	printf("Name: %s\nNIS: %s\nAge: %d\n", N, A, U);
	return 0;
}
