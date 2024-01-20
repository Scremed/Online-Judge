#include <stdio.h>

int main() {
	int A;
	double B,R,F,K;
	scanf("%d", &A);
	
	for(int i=0;i<A;i++) {
		scanf("%lf", &B);
		R= (B*4)/5;
		F= (B*9)/5 + 32;
		K= B + 273;
		
		printf("%.2lf %.2lf %.2lf\n", R,F,K);
	}
	
	return 0;
}
