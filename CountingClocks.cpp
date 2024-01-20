#include <stdio.h>

int main(){
	int n;
	double A, B, total;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%lf %lf", &A, &B);
		total = (A*B);
		total = total/360;
		printf("%.2lf\n", total);
	}
	
	return 0;
}
