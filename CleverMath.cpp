#include <stdio.h>
#include <string.h>

int solve(char *A, char *B) {
	int lenA = strlen(A);
	int lenB = strlen(B);
	
	int maxlen = 0;
	if(lenA > lenB) {
		maxlen = lenA;
	} else {
		maxlen = lenB;
	}
	
	char intVal[maxlen+1] = {0};
	intVal[maxlen] = '\0';
	
	int numA = 0, numB = 0;
	for(int i = 0; i < maxlen; i++) {
		if(i < lenA) {
			numA = A[lenA-i-1] - '0';
		} else {
			numA = 0;
		}
		if(i < lenB) {
			numB = B[lenB-i-1] -'0';
		} else {
			numB = 0;
		}
		
		int sum = numA + numB;
		intVal[maxlen-i-1] = sum % 10 + '0';
	}
	int result = 0;
	for(int i = 0; i < maxlen; i++) {
		result = result * 10 + (intVal[i] - '0');
	}
	
	return result;
}

int main() {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		char A[10],B[10];
		scanf("%s %s", &A, &B);
		
		int result = solve(A, B);
		printf("Case #%d: %d\n", i+1, result);
	}
}
