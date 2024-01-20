#include <stdio.h>

int main() {
	double l, h, L, K, total, b, b2, b3;
	
	
	scanf("%lf %lf %lf", &l, &b, &h);
	
	b2 = b;
	b3 = b;
	L = 0.5*(b*h);
	K = b+b2+b3;
	total = 2*L + K*l;
	
	printf("%.3lf\n", total);
	
	return 0;
}
