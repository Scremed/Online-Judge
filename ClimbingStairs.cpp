#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	

	int step, steps = 0, n[1001], sets = 0;
	for(int i = 0; i < N; i++) {
		int step;
		scanf("%d", &step);
		
		if(step == steps+1) {
			steps = step;
		} else {
			n[sets] = steps; //store the steps
			steps = step; //reset steps
			sets++; //num of sets
		}
	}
	
	n[sets] = steps;
	sets++;
	
	for(int i = 0; i < sets; i++) {
		
		if(i != 0) {
			printf(" ");
		}
		printf("%d", n[i]);
		
	}
	printf("\n");
	
	return 0;
}
