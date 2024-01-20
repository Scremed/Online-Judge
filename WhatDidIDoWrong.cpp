#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		int A[N], B[N];
		
		for(int j = 0; j < N; j++) {
			scanf("%d", &A[j]);
		}
		
		for(int j = 0; j < N; j++) {
			scanf("%d", &B[j]);
		}
		
		printf("Case #%d: ", i+1);
		for(int k = 0; k < N; k++) {
			int total = A[k] - B[k];
			
			printf("%d", total);
			
			if(k != N-1){
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
