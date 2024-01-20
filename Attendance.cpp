#include <stdio.h>

int main() {
	int N; //N * N
	scanf("%d", &N);
	
	int n[N+1][N+1];
	int team[N+1];
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			scanf(" %d", &n[i][j]);
		}
		team[i] = i;
	}
	
	int count[N+1] = {0};
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			for(int k = 1; k <= N; k++){
				if(n[i][j] == team[k]) {
					count[k]++;
				}
			}
		}
	}
	
	int incomplete=0;
	for(int i = 1; i <= N; i++){
		if(count[i] < N) {
			incomplete++;
		}
	}
	
	printf("%d\n", incomplete);
	return 0;
}
