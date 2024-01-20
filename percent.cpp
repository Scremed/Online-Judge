
#include <stdio.h>

int main(){
	int n,a;
	long long b;
	double c;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++) {
		scanf("%d %lld", &a, &b);
		c = b*(a*0.01);
		printf("%.2lf\n", c);
	}
	return 0;
}
