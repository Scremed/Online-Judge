#include <stdio.h>

int main(){
	int n;
	long long a;
	scanf("%d", &n);
	
	a = 1LL << n;
	a -=1 ;
	
	printf("%lld\n", a);
	
	return 0;
}
