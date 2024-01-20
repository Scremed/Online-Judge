#include <stdio.h>

int recursion(int N, int *count) {
	if(N % 3 == 0 && N != 0) {
		(*count)++;
	}
	
	if(N == 0) {
		return 1;
	} 
	if(N == 1) {
		return 2;
	}
	if(N % 5 == 0) {
		return N * 2;
	}
	
	return recursion(N-1, count) + N + recursion(N-2, count) + N-2;
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N, count = 0;
		scanf("%d", &N);
		
		int result  = recursion(N, &count);
		
		printf("Case #%d: %d %d\n", i+1, result, count);
	}
}
