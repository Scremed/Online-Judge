#include <stdio.h>

int linearSearch(int weight[], int N, int min) {
	int count = 0;
	for(int i = 0; i < N; i++) {
		if(weight[i] >= min) {
			count++;
		}
	}
	
	return count;
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N, K;
		scanf("%d %d", &N, &K);
		
		int weight[N];
		for(int j = 0; j < N; j++) {
			scanf("%d", &weight[j]);
		}
		
		int total = linearSearch(weight, N, K);
		
		printf("Case #%d: %d\n", i+1, total);
	}
	
	return 0;
}
