#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		int x[N+5];
		int ans = 2e9;
		
		for(int j = 1; j <= N; j++) {
			scanf("%d", &x[j]);
		}
		
		for(int j = 1; j < N; j++) {
			int dif = x[j] - x[j+1];
			if(dif < 0) {
				dif *= -1;
			}
			if(dif < ans){
				ans = dif;
			}
		}
		printf("Case #%d: %d\n", i+1, ans);
	}
	
	return 0;
}
