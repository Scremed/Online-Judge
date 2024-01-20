#include <stdio.h>

int main() {
	int M,N;
	scanf("%d %d", &M, &N);
	
	for(int m = 0; m < M; m++) {
		for(int i = 1; i <= N; i++) {
			for(int j = 1; j <= N; j++) {
				if(j <= N-i) {
					printf(" ");
				} else {
					printf("*");
				}
			}
			printf("\n");
		}
	}
}
