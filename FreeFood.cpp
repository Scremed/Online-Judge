#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		long long items = 0, money = 0, total = 0;
		scanf("%lld %lld", &items, &money);
		long long n[items];
		
		for(int j = 0; j < items; j++) {
			scanf("%lld", &n[j]); getchar();
			total += n[j];
		}
		
		if(money < total) {
			printf("Case #%d: Wash dishes\n", i + 1);
		} else {
			printf("Case #%d: No worries\n", i + 1);
		}
	}
	return 0;
}
