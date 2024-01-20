#include <stdio.h>

void pascal(int n) {
	for(int i = 1; i <= n; i++) {
		int koef = 1;
		if(i == n) {
			for(int j = 1; j <= i; j++) {
				if(j < n) {
					printf("%d ", koef);
				} else {
					printf("%d\n", koef);
				}
				koef = koef * (i - j) / j;
			}
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);
	pascal(n+1);
}
