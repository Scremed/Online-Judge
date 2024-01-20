#include <stdio.h>

int main() {
	long long a, b, c, d;
	long long e, f, g, h;
	long long i, j, k, l;
	long hasil, hasil2, hasil3;
	
	scanf("(%lld+%lld)x(%lld-%lld)", &a, &b , &c, &d);getchar();
	hasil = (a+b)*(c-d);
	scanf("(%lld+%lld)x(%lld-%lld)", &e, &f , &g, &h);getchar();
	hasil2 = (e+f)*(g-h);
	scanf("(%lld+%lld)x(%lld-%lld)", &i, &j , &k, &l);getchar();
	hasil3 = (i+j)*(k-l);
	
	printf("%ld %ld %ld\n", hasil, hasil2, hasil3);
	
	return 0;
}
/*
(1+2)x(3-4)
(10+3)x(5-2)
(9+21)x(45-20)
*/
