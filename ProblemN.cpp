#include <stdio.h>

int main(){
	double i, m;
	int j, n;
	char a[101], b[101];
	scanf("%s %lf %d %s %lf %d", a, &i, &j, b, &m, &n);
	printf("Name 1: %s\nHeight 1: %.2lf\nAge 1: %d\nName 2: %s\nHeight 2: %.2lf\nAge 2: %d\n", a, i, j, b, m, n);
	return 0;
}
