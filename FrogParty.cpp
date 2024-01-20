#include <stdio.h>

int main() {
	long T;
	scanf("%ld", &T);
	
	for(int i=1; i<=T; i++) {
		long long A,B;
		scanf("%lld %lld", &A, &B);
		
		if(A%2 == 1 && B%2 == 1) {
			printf("Case #%d: Need more frogs\n", i);
		} else {
			printf("Case #%d: Party time!\n", i);
		}
	}
	return 0;
}
