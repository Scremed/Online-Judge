#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	long long A[N], total = 0;
	
	for(int i = 0 ; i < N; i++) {
		scanf("%lld", &A[i]); getchar();
	}
	
	for(int i = 0; i < N; i++) {
		if(A[i] > 0) {
			total += A[i];
		}
	}
	
	printf("%lld\n", total);
	
	return 0;
}
