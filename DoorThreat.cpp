#include <stdio.h>

int main () {
	int T; //testcases
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N = 0, M = 0;
		scanf("%d %d", &N, &M);
		
		int n[M] = {0}; //num of patterns
		int flag[N+1]= {0}; //set all to unlocked
		for(int j = 0; j < M; j++) {
			scanf("%d", &n[j]);
		}
		
		for(int j = 0; j < M; j++) {
			for(int k = 1; k <= N; k++) {
				if(k % n[j] == 0 && flag[k] == 0) {
					flag[k] = 1; //set to locked
				} else if(k % n[j] == 0 && flag[k] == 1 ) { //if already unlocked set to locked
					flag[k] = 0;
				}
			}
		}
		
		int locked= 0;
		for(int k = 1; k <= N; k++) {
			if(flag[k] == 1) {
				locked++;
			}
		}
		
		printf("Case #%d:", i+1);
		if(locked != N) {
			for(int j = 1; j <= N; j++) {
				if(flag[j] == 0 && j < N) {
					printf(" %d", j);
				} else if(flag[j] == 0 && j >= N-1) {
					printf(" %d", j);
				}
			}
		} else {
			printf(" No room left!");
		}
		printf("\n");
	}
	
	return 0;
}
