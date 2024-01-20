#include <stdio.h>

int main() {
	int N, M; //Bibi's attack & Dragon's attack
	
	scanf("%d %d", &N, &M);
	int X[N], Y[M], Xmax, Ymax; // Bibi's attack power & Dragon's
	
	//Bibi's
	for(int i = 0; i < N; i++) {
		scanf("%d", & X[i]);
		Xmax = X[0];
	}
		
	for(int i=0; i < N; i++) {
		if(Xmax < X[i]) {
			Xmax = X[i];
		}
	}
	
	
	//Dragon's
	for(int i = 0; i < M; i++) {
		scanf("%d", & Y[i]);
		Ymax = Y[0];
	}
	
	for(int i=0; i < M; i++) {
		if(Ymax < Y[i]) {
			Ymax = Y[i];
		}
	}
	
	if(Ymax < Xmax) {
		printf("The dark secret was true\n");
	} else {
		printf("Secret debunked\n");
	}
	
	return 0;
}
