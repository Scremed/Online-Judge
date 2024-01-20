#include <stdio.h>

int main() {
	long long A, C,B, a=0;
	int T;
	//number of cases
	scanf("%d", &T);
	
	for(int i=1;i<=T;i++) {
		scanf("%lld %lld %lld", &A, &B, &C);
		if(A%100 == 0 && B <= 100){
			a= A*B/100;
			if(a<C){
				printf("Case #%lld: %d\n", i, a);
			} else {
				printf("Case #%lld: %d\n", i, C);
			}
		}
	}
	return 0;
}
