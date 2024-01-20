#include <stdio.h>

int main() {
	FILE *fp = fopen("testdata.in", "r");
	
	if(fp == NULL) {
		printf("File not found!\n");
		return 1;
	}
	
	int A, B;
	fscanf(fp, "%d %d\n", &A, &B);
	
	printf("%d\n", A+B);
	
	return 0;
}
