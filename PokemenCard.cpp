#include <stdio.h>

int main() {
	long long X, Y, cards;
	scanf("%lld %lld", &X, &Y);
	
	cards = X/Y;
	
	printf("%lld\n", cards);
	
	return 0;
}
