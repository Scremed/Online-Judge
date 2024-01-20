#include <stdio.h>

int main() {
	int T, N;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int odd = 0, even = 0;
		scanf("%d", &N);
		int n[N];
		
		for(int j = 0; j < N; j++) {
			scanf("%d", &n[j]);
		}
		
		for(int j = 0; j < N; j++) {
			if(n[j] % 2 == 0) {
				even++;
			} else {
				odd++;
			}
		}
		
		printf("Odd group : %d integer(s).\n", odd);
		printf("Even group : %d integer(s).\n", even);
		printf("\n");
	}
	return 0;
}
