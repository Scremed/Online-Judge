#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	bool easy = true;
	for(int i = 0; i < N; i++) {
		int n;
		scanf("%d", &n);
		
		if(n == 1) {
			printf("not easy\n");
			easy = false;
			break;
		}
	}
	
	if(easy) {
		printf("easy\n");
	}
	return 0;
}
