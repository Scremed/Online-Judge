#include <stdio.h>
#define PI 3.14

int main () {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		double R, H;
		scanf("%lf %lf", &R, &H);
		
		double area;
		area = (2*PI*R*H) + (2*PI*R*R);
		
		printf("Case #%d: %.2lf\n", i+1, area);
	}
	
	return 0;
}
