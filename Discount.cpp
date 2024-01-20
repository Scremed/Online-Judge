#include <stdio.h>

int main() {
	double X, Y, percent;
	scanf("%lf %lf", &X, &Y);
	
	percent = (Y/X)*100;
	
	percent = 100 - percent;
	
	printf("%.2lf%%\n", percent);
	
	return 0;
}
