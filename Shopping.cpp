#include <stdio.h>

int main() {
	long a,b, c,d, e,f, g,h;
	scanf("%ld %ld", &a, &b);getchar();
	scanf("%ld %ld", &c, &d);getchar();
	scanf("%ld %ld", &e, &f);getchar();
	scanf("%ld %ld", &g, &h);getchar();
	
	double k,l,m,n;
	k= 100-a;
	k= 100/k*b;
	printf("$%.2lf\n", k);
	l= 100-c;
	l= 100/l*d;
	printf("$%.2lf\n", l);
	m= 100-e;
	m= 100/m*f;
	printf("$%.2lf\n", m);
	n= 100-g;
	n= 100/n*h;
	printf("$%.2lf\n", n);
	
	
	return 0;
}
