#include <stdio.h>

int main() {
	int T; //testcases
	scanf("%d", &T);
	int bit; 
	
	for(int i = 0;i < T; i++) {
		unsigned long long X, P;
		scanf("%llu %llu", &X, &P);
		
    	bit = ((X >> P) & 0x01);
    	
    	printf("%d\n", bit);
	}
	return 0;
}
