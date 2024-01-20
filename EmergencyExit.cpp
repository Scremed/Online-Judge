#include <stdio.h>

int main() {
	int T;//testcases
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N=0,K=0; //length, Jojo's step
		scanf("%d %d", &N, &K); getchar();
		
		char stairs[10001];
		
		scanf("%s", stairs);
		
		int stairsin=0;
		for(int j = 0; j < N; j++) {
			if(stairs[j] == '1') {
				stairsin=j;
				break;
			}
		}
		
		int stairsout=0; 
		for(int j = N - 1; j >= 0; j--) {
			if(stairs[j] == '1') {
				stairsout=j;
				break;
			}
		}
		
		if((stairsin == stairsout) && K >= N) {
			printf("Case #%d: Alive\n", i + 1);
		} else if(stairsin != stairsout && (stairsin+1) <= K && (N-stairsout)<=K) {
			printf("Case #%d: Alive\n", i + 1);
		} else {
			printf("Case #%d: Dead\n", i + 1);
		}
	}
	return 0;
}
