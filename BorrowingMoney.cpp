#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	int A, a[T], total = 0;
	for(int i = 0; i < T; i++) {
		scanf("%d", &A);
		a[i] = A;
		total += a[i];
	}
	printf("%d\n", total);
}
