#include <stdio.h>

int main() {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N; //N * N
		scanf("%d", &N);
		
		int n[N][N];
		for(int j = 0; j < N; j++) {
			for(int k = 0; k < N; k++){
				scanf(" %d", &n[j][k]);
			}
		}
		
		int sum[N] = {0};
		for(int j = 0; j < N; j++) {
			for(int k = 0; k < N; k++){
				sum[j] += n[k][j];
			}
		}
		
		printf("Case #%d: ", i+1);
		for(int j = 0; j < N; j++) {
			if(j <= N-2) {
				printf("%d ", sum[j]);
			} else {
				printf("%d\n", sum[j]);
			}
		}
	}
	return 0;
}
