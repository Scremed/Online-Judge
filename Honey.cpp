#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	for(int i = 0; i < T; i++) {
		int a,b, total = 0, remainder=0;
		scanf("%d %d", &a, &b);
		
		while(a > 0) {
			total += a;
			remainder +=a;
			a = remainder/b;
			remainder %= b;
		}
		
		printf("Case #%d: %d\n", i+1, total);
	}
	return 0;
}
