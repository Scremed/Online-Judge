#include <stdio.h> 

int main() {
	int  T; //testcases
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N, M, K; //jmlh piring, kapasitas/katak, porsi awal
		scanf("%d %d %d", &N, &M, &K);
		int n[N]; //porsi per piring
		
		for(int j = 0; j < N; j++) {
			scanf("%d", &n[j]); getchar();
			
			if(n[j] >= K && n[j] <= M) {
				K = n[j];
			} else {
				K = K; //tetap porsi paling besar
			}
		}
		printf("Case #%d: %d\n", i + 1, K);
	}
	return 0;
}
