#include <stdio.h>

int main() {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N; //N * N
		scanf("%d", &N);
		
		long long n[N][N];
		for(int j = 0; j < N; j++) {
			for(int k = 0; k < N; k++) {
				scanf("%lld", &n[j][k]);
			}
		}
		
		long long sum[N];
		for(int j = 0; j < N; j++) {
			sum[j] = 0;
			for(int k = 0; k < N; k++) {
				sum[j] += n[k][j];
			}
		}
		
		printf("Case #%d: ", i+1);
		for(int j = 0; j < N; j++) {
			if(j <= N-2) {
				printf("%lld ", sum[j]);	
			} else {
				printf("%lld\n", sum[j]);
			}
		}
	}
}
