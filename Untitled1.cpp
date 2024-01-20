#include <stdio.h>

int main() {
	char ch;
	FILE *fp;
	fp = fopen("testdata.in", "r");
	
	while(!feof(fp)) {
		ch = testdata(fp);
		sort
		printf("%c", ch);
	}
	
	fclose(fp);
	
	return 0;
}
