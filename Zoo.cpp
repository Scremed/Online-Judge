#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int animals[N];
	for(int i = 0; i < N; i++) {
		scanf("%d", &animals[i]); getchar();
	}
	
	long long total = 0;
	for(int i = 0; i < N; i++) {
		total = total + animals[i];
	}

	printf("%lld\n", total);
	return 0;
}
