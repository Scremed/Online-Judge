#include <stdio.h>

int N = 5;

void findnum(long long S[25], long long ori[5], int idx) {
	if(idx == N) {
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				if(ori[i] + ori[j] != S[i*N+j]){
					return;
				}
			}
		}
		
	}
	
	for(int i = 1; i <= 10^7; i++) {
		ori[idx] = i;
		findnum(S, ori, idx+1);
	}
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		long long S[25];
		for(int j = 0; j < 25; j++) {
			scanf("%lld", &S[j]);
		}
		
		long long ori[5];
		findnum(S, ori, 0);
		
		for(int j = 0; i < 5; i++) {
			printf("%lld ", ori[j]);
		}
	}
}
