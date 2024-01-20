#include <stdio.h>

int main() {
	long long a,b,c,d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	
	long long e,f;
	e= a*b;
	f= c-d;
	
	if(e == f){
		printf("True\n");
	} else {
		printf("False\n");
	}
	return 0;
}
