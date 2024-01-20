#include <stdio.h>

int fibo(int n, int *total) {
	(*total)++;
	if(n <= 1) {
		return 1;
	}
	
	return fibo(n-1, total) + fibo(n-2, total);
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int n;
		scanf("%d", &n);
		
		int total = 0;
		fibo(n, &total);
		printf("Case #%d: %d\n", i+1, total);
	}
}
