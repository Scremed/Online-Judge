#include <stdio.h>
#include <string.h>

int main() {
	int T; //testcase
	scanf("%d", &T);getchar();
	
	for(int i = 0; i < T; i++) {
		char S[100000];
		
		scanf("%[^\n]", S); getchar();
		
		int length = strlen(S);
		char used[128] = {0};
		int count = 0;
		
		for (int j = 0; j < length; j++) {
	        char currentChar = S[j];

	        if (used[currentChar] == 0) {
	            used[currentChar] = 1;
	            count++;
	        }
	    }
		
		if(count % 2 == 0) {
			printf("Case #%d: Yay\n", i+1);
		} else {
			printf("Case #%d: Ewwww\n", i+1);
		}
	}
	
	return 0;
}
