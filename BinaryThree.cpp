#include <stdio.h>

int bit_on(int x) {
	int ct = 0;
	while(0 < x) {
		if(x%2 == 1){
			ct++;
		}
		x/=2;
	}
	return ct;
}

int binary(int T) {
	for(int i = 0; i < T; i++) {
		int N = 0;
		scanf("%d", &N);
		
		int n[N];
		for(int j = 0; j < N; j++) {
			scanf("%d", &n[j]);
		}
		int ans1=0, ans2=0;
		for(int j = 0; j < N; j++) {
			for(int k = j+1; k < N; k++) {
				int tmp = (n[j] ^ n[k]);
				
				if(bit_on(tmp) >= 3) {
					ans1++;
				} else {
					ans2++;
				}
			}
		}
		printf("Case #%d: ", i+1);
		printf("%d %d\n", ans1, ans2);
	}
}

int main() {
	int T;
	scanf("%d", &T);
	binary(T);
	
	return 0;
}
