#include <stdio.h>

int main() {
	int T, N; //array size T * N
	scanf("%d %d", &T, &N);
	int n[N], subSum[T]={0}; 
	
	for(int i = 0; i < T; i++) {
		for(int j = 0; j < N; j++) {
			scanf("%d", &n[j]);
			subSum[i] += n[j];
		}
	}
	
	int max = subSum[0];
	for(int i = 0; i < T; i++) {
		if(max < subSum[i]) {
			max = subSum[i];
		}
	}
	
	printf("%d\n", max);
}
