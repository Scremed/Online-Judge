#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N;
		scanf("%d", &N);
		
		int result[N], min[N];
		for(int j = 0; j < N; j++) {
			scanf(" %d", &result[j]);
		}
		getchar();
		for(int j = 0; j < N; j++) {
			scanf(" %d", &min[j]);
		}
		
		int fail = 0;
		for(int j = 0; j < N; j++) {
			if(result[j] < min[j]) {
				fail++;
			}
		}
		
		printf("Case #%d: %d\n", i + 1, fail);
	}
}
