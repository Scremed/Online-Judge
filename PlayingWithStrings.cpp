#include <stdio.h>
#include <string.h>

int main () {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		char str[1005];
		int M;
		scanf("%s", str);
		scanf("%d", &M);
		int length = strlen(str);
		
		for(int j = 0; j < M; j++) {
			char A, B;
			scanf(" %c %c", &A, &B); getchar();
			
			for(int k = 0; k < length; k++) {
				if(str[k] == A) {
					str[k] = B;
				}	
			}
		}
		
		printf("Case #%d: %s\n", i+1, str);
	}
}
