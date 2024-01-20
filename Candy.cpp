#include <stdio.h>

int main() {
	int T,N, M;;
	scanf("%d", &T);
	int total[T];
	
	for(int i = 0; i < T; i++) {
		scanf("%d %d", &N, &M);
		int price[N], max;
		
		for(int j = 0; j < N; j++) {
			scanf("%d", &price[j]); getchar();
		}
		
		int maxBuy = 0;
		for(int j = 0; j < N; j++) {
			// to get the amount of candy with each price
			int candy = M / price[j];
			if(candy > maxBuy) {
				maxBuy = candy;
			}
		}
		total[i] = maxBuy;
	}
	
	for(int i = 0; i < T; i++) {
		printf("Case #%d: %d\n", i + 1, total[i]);
	}
	return 0;
}
