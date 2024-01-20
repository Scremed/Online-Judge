#include <stdio.h>
#include <string.h>

void convertNum(char *str) {
	if(*str == '0') *str = 'O';
	else if(*str == '1') *str = 'I';
	else if(*str == '3') *str = 'E';
	else if(*str == '4') *str = 'A';
	else if(*str == '5') *str = 'S';
	else if(*str == '6') *str = 'G';
	else if(*str == '7') *str = 'T';
	else if(*str == '8') *str = 'B';
}

void convert(char str[1001], int K) {
	int len = strlen(str);
	
	for(int i = 0; i < len; i++) {
		if(str[i] == ' ') {
			printf(" ");
			continue;
		}
		convertNum(&str[i]);
		str[i] -= K;
		if(str[i] < 'A') {
			str[i] += 26;
		} else if(str[i] > 'Z') {
			str[i] -= 26;
		}
		printf("%c", str[i]);
	}
	printf("\n");
}

int main() {
	FILE *fp = fopen("testdata.in", "r");
	
	if(fp == NULL) {
		printf("File not found!\n");
		return 1;
	}
	
	int T;
	fscanf(fp, "%d\n", &T);
	
	for(int i = 0; i < T; i++) {
		int K;
		fscanf(fp, "%d\n", &K);
		
		char str[1001];
		fscanf(fp, "%[^\n]\n", str);
		
		printf("Case #%d: ", i+1);
		convert(str, K);
	}
}
