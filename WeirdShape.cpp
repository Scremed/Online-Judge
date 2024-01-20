#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		
		for(int j = 1; j <= N; j++) {
			for(int k = 1; k <= N; k++){
				if(j == 1 || j == N || k == 1 || k == N || k == N-j+1 || j ==k){
					printf("*");
				} else {
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
