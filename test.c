#include <stdio.h>

void fraktal_A(int x) {
	int i;
	if(x <= 0) return;
	fraktal_A(x-1);
	for(int i = 1; i <= x; i++) printf("*");
	printf("\n");
	fraktal_A(x-1);
}

int main() {
	int x;
	scanf("%d", &x);
	
	fraktal_A(x);
}
