#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		long long A, B, C;
		
		scanf("%lld %lld %lld", &A, &B, &C);
		
		if(A + B > C && A <= B) {
			printf("BISA\n");
		} else {
			printf("TIDAK BISA\n");
		}
	}
	
	return 0;
}
