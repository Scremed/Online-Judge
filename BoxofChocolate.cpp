#include <stdio.h>

int main() {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N, M; //number of child & weight of chocolate
		scanf("%d %d", &N, &M); //M * N
		
		long long A[N][M];
		for(int j = 0; j < N; j++) {
			for(int k = 0; k < M; k++) {
				scanf("%lld", &A[j][k]);
			}
		}
		
		long long max[N];
		for(int j = 0; j < N; j++) {
			max[j] = A[j][0];
			for(int k = 0; k < M-1; k++) {
				if(max[j] < A[j][k+1]) {
					max[j] = A[j][k+1];
				}
			}
		}
		
		long long maxSum = 0;
		for(int j = 0; j < N; j++) {
			maxSum += max[j];
		}
		
		printf("Case #%d: %lld\n", i+1, maxSum);
	}
	
	return 0;
}
