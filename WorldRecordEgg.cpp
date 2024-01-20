#include <stdio.h>

int main() {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int N; //day
		scanf("%d", &N);
		
		long long n[N] = {0};
		n[0] = 0;
		n[1] = 1;
		
		for(int j = 2; j < N; j++) {
			n[j] = n[j-1] + n[j-2];
		}
		
		printf("Case #%d: %lld\n", i+1, n[N-1]);
	}
	return 0;
}
