#include <stdio.h>

int main() {
	int N,K;
	scanf("%d %d", &N, &K);
	
	//pattern 1
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++) {
			printf("#");
		}
		printf("\n");
	}
	printf("\n");
	
	//pattern 2
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++) {
			if(i % K == 0 ) {
				printf("#");
			} else {
				printf(".");
			}
		}
		printf("\n");
	}
	printf("\n");
	
	//pattern 3
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++) {
			if(j % K == 0) {
				printf("#");
			} else {
				printf(".");
			}
		}
		printf("\n");
	}
	
	return 0;
}
