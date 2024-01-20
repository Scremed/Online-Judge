#include <stdio.h>

int fib(char *S, int N) {
	if(N == 0) {
		printf("%c", S[0]);
		return 0;
	} 
	if(N == 1) {
		printf("%c", S[1]);
		return 0;
	}
	
	
	return fib(S, N-1) + N + fib(S, N-2) + N-2;
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N; getchar();
		scanf("%d", &N);
		
		char S[2] = {};
		scanf(" %c %c", &S[0], &S[1]);
		
		printf("Case #%d: ", i+1, S[0], S[1]);
		fib(S, N);
		printf("\n");
	}
	
	return 0;
}
//index
// 2 3 4 5 6 ...
// 1 1 2 3 5 8 13 21 34 55 89 144 233 377
