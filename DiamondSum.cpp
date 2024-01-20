#include <stdio.h>
#include <assert.h>

int main() {
	double n;
	
	scanf("%lf", &n);
	int a,b,c,d;
	double p, q[4];
	
	for(int i=0;i<n;i++) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		p = a*2.0 + b*2.0 + (c/3.0)*4.0 + d/2.0;
		q[i] = p;
	}
	
	for(int j=0;j<n;j++){
		printf("%.2lf\n", q[j]);
	}

	
	return 0;
}
