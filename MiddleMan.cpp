#include <stdio.h>

int main(){
	int M,N,O;
	
	scanf("%d", &M);
	scanf("%d", &N);
	scanf("%d", &O);
	
	M=M%100/10;
	N=N%100/10;
	O=O%100/10;
	
	printf("%d\n", M);
	printf("%d\n", N);
	printf("%d\n", O);
	
	return 0;
}
