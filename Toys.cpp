#include <stdio.h>

int main() {
	int T; //testcases
	
	scanf("%d", &T);
	int total[T];
	
	for(int i = 0; i < T; i++) {
		int N; //number of toys
		int a, b, c, d; //multiplication
		scanf("%d %d %d %d %d", &N, &a, &b, &c, &d);
		
		total[i] = 0;
		for(int j = 1; j <= N; j++) {
			if(j % a == 0 || j % b == 0|| j % c == 0|| j % d == 0) {
				++total[i];
			}
		}
	}
	
	for(int k = 0; k < T; ++k) {
		printf("Case #%d: %d\n", k + 1, total[k]);
	}
	
	return 0;
}
