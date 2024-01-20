#include <stdio.h>

int main() {
	int N, jo, li, bi, mean;
	scanf("%d", &N);
	scanf("%d %d %d", &jo, &li, &bi);
	int part, totalPart = 3 + N,
		score = jo + li + bi;
	
	for(int i = 0; i < N; i++) {
		scanf("%d", &part); getchar();
		score += part;
	}
	
	mean = score / totalPart;
	
	if(jo < mean) { //jojo
		printf("Jojo tidak lolos\n");
	} else {
		printf("Jojo lolos\n");
	}
	
	if(li < mean) { //lili
		printf("Lili tidak lolos\n");
	} else {
		printf("Lili lolos\n");
	}
	
	if(bi < mean) { //bibi
		printf("Bibi tidak lolos\n");
	} else {
		printf("Bibi lolos\n");
	}
	
	return 0;
}
