#include <stdio.h>

int main() {
	int T, N;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		
		scanf("%d", &N);
		int A[N];
		
		for(int j = 0; j < N; j++) {
			scanf("%d", &A[j]);
		}
		
		int max = A[0], count = 0;
		for(int j = 1; j < N; j++) {
			if(A[j] > max) {
				max = A[j];
			}
		}
		for(int j = 0; j < N; j++) {
			if(A[j] == max) {
				count++;
			}
		}
		
		printf("Case #%d: %d\n", i+1, count);
	}
	
	return 0;
}
