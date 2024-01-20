#include <stdio.h>

int main() {
	int T, N;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int total = 1;
		scanf("%d", &N);
		total = 1;
		
		printf("Case %d: ", i+1);
		for(int j = 0; j < N; j++) {
			total += j;
			if(j == N-1) {
				printf("%d\n", total);
			} else {
				printf("%d ", total);
			}
		}
	}
	
	return 0;
}
