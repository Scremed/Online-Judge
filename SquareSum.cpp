#include <stdio.h>

int main() {
	int a,b,c,d, e,f,g,h, i,j,k,l;
	scanf("%d %d %d %d", &a, &b, &c, &d);getchar();
	scanf("%d %d %d %d", &e, &f, &g, &h);getchar();
	scanf("%d %d %d %d", &i, &j, &k, &l);getchar();
	
	double p,q,r;
	
	p = a*2 + b*2 + c*2 + d;
	q = e*2 + f*2 + g*2 + h;
	r = i*2 + j*2 + k*2 + l;
	
	printf("%.2f\n%.2f\n%.2f\n", p, q, r);
	
	return 0;
}
