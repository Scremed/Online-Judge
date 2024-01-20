#include <stdio.h>

int main(){
	char a[100];
	scanf("%[^\n]s", a);
	printf("Congrats \"%s\" for joining the CS department at BINUS.\n", a);
	return 0;
}
