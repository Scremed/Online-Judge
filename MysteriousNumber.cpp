#include <stdio.h>

int isPrime(int X) {
	int checkPrime =1; //prime set to false
	
	if(X <= 1) { // 1 and 0 is not a prime num
		return 0; 
	}
	
	for(int i = 2; i <= X / 2; i++) {
		if(X % i == 0) {
			checkPrime = 0; //if diviseable by i, X is not a prime
			return checkPrime;
		}
	}
	
	return checkPrime;
}

int isSquare(int X) {
	int checkSquare = 0; //square set to false
	
	for(long i = 0; i <= X; i++) {
		if(i*i == X) { //square
			checkSquare = 1;
			return checkSquare;
		}	
	}
	
	return checkSquare;
}

int isCubic(int X) {
	int checkCubic = 0; //cubic set to false
	
	for(long i = 0; i <= X; i++) {
		if(i*i*i == X) { //cubic
			checkCubic = 1;
			return checkCubic;
		}
	}
	
	return checkCubic;
}

int main() {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		int X;
		scanf("%d", &X);
		
		printf("Case #%d :", i+1);
		
		if(isPrime(X) == 1) {
			printf(" prime");
		}
		if(isSquare(X) == 1) {
			printf(" square");
		}
		if(isCubic(X) == 1) {
			printf(" cubic");
		}
		if(isCubic(X) == 0 && isSquare(X) == 0 && isPrime(X) == 0) {
			printf(" none");
		}
		
		printf("\n");
	}
	
	return 0;
}
