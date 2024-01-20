#include <stdio.h>

int main() {
	double X, Y, percent;
	scanf("%lf %lf", &X, &Y);
	
	percent = (X/Y)*100;
	
	printf("%.2lf%%\n", percent);
	
	return 0;
}
