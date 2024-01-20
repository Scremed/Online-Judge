#include <stdio.h>

int j = 0;
void jojoPlays(long long N);

void liliPlays(long long N) {
	j++;
	if(N == 1) {
		return; // Jojo wins
	}
	
	if(N % 2 == 0 && N > 0) { // if even, half
		jojoPlays(N/2);
	} else {
		jojoPlays((N*3)+1);
	}
}

void jojoPlays(long long N) {
	j++;
	if(N == 1) {
		return; // Lili wins
	}
	
	if(N % 2 == 0 && N > 0) { // if even, half
		liliPlays(N/2);
	} else {
		liliPlays((N*3)+1);
	}
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		long long N;
		j = 0;
		scanf("%lld", &N);
		
		jojoPlays(N);
		
		if(j % 2 == 0) {
			printf("Case #%d: Jojo\n", i+1);
		} else {
			printf("Case #%d: Lili\n", i+1);
		}
	}
	
	return 0;
}
