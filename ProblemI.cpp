#include <stdio.h>

int main(){
	char a[100];
	scanf("%[^\n]s", a);
	printf("Hello %s!\n", a);
	return 0;
}
