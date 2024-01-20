#include <stdio.h>

int oddJobonacci(int N) {
	if(N == 0) {
		return 0;	
	} else if(N == 1 || N % 2 == 1) {
		return 1;
	} else {
		return (oddJobonacci(N-1) + oddJobonacci(N-2));
	}
}

int main() {
	int N;
	scanf("%d", &N);
	
	long long result = oddJobonacci(N);
	
	printf("%lld\n", result);
}
