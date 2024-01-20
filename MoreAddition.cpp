#include <stdio.h>

int main() {
	int N, count = 0;
	scanf("%d", &N);
	
	for(int i = N; i >= 0; i--) {
		for(int j = N-i; j >= 0; j--){
			int k = N-i-j;
			if(k >= 0) {
				count++;
			}
		}
	}
	
	printf("%d\n", count);
}
