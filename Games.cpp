#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	
	for(int i = 0; i < T; i++) {
		int N, lili = 0, bibi = 0;
		scanf("%d", &N);
		char n[N+1];
		
		for(int j = 0; j < N; j++) {
			scanf(" %c", &n[j]);
			if(n[j] == 'L') {
				lili++;
			} else if(n[j] == 'B') {
				bibi++;
			} else if(n[j] == 'T') {
				//do nothing
			}
		}
		
		if(bibi > lili) {
			printf("Bibi\n");
		} else if(lili > bibi) {
			printf("Lili\n");
		} else if(lili == bibi) {
			printf("None\n");
		}
	}
	return 0;
}
