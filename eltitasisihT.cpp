#include <stdio.h>
#include <string.h>

void reverse(char *str, int start, int end) {
	if(start < end) {
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		
		reverse(str, start+1, end-1);
	}
}


int main() {
	int T;
	scanf("%d", &T); getchar();
	
	for(int i = 0; i < T; i++) {
		char str[1001];
		scanf(" %[^\n]s", str);
		int len = strlen(str);
		
		printf("Case #%d: ", i+1);
		reverse(str, 0, len - 1);
		printf("%s\n", str);
	}
}
