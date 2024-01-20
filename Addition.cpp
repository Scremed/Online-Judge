#include <stdio.h>

int main() {
	long long a, b, c, d, e;
	long long f, g, h, i;
	
	scanf("%lld + %lld =", &a, &b);getchar();
	g = a + b;
	scanf("%lld + %lld =", &c, &d);getchar();
	h = c + d;
	scanf("%lld + %lld =", &e, &f);getchar();
	i = e + f;
	
	printf("%lld\n%lld\n%lld\n", g, h, i);
	
	return 0;
}
/*
2 + 2 =
4 + 3 =
1 + -1 =
*/

