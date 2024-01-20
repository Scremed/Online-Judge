#include <stdio.h>

int addition(int N, int A[]) {
	if(N == 0) {
		return 0;
	}
	return A[N-1] + addition(N-1, A);
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		int A[N] = {0};
		
		for(int j = 0; j < N; j++) {
			scanf("%d", &A[j]);
		}
		
		int result = addition(N, A);
		
		printf("Case #%d: %d\n", i+1, result);
	}
}
