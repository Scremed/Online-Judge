#include <stdio.h>

int main () {
	double phys, magic, pure, total;
	
	scanf("%lf %lf %lf", &phys, &magic, &pure);
	total = phys*0.2 + magic*0.3 + pure*0.5;
	
	printf("%.2lf\n", total);
	
	return 0;
}
