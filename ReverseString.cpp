#include <stdio.h>
#include <string.h>

void reverseStr(char *str) {
	int length = strlen(str);
	
	for(int i = 0; i < length/2; i++) {
		char temp = str[i];
		str[i] = str[length-i-1];
		str[length-i-1] = temp;
	}
}

int main() {
	int T; //testcase
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
		char str[1001];
		scanf("%s", str);
		
		reverseStr(str);
		
		printf("Case #%d : %s\n", i+1, str);
	}
	return 0;
}
