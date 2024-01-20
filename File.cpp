#include <stdio.h>
#include <string.h>

typedef struct{
	char shrt[55];
	char ori[55];
} Dict;

bool search(Dict dict[], char *words, int T) {
	for(int i = 0; i < T; i++) {
		int cmp = strcmp(dict[i].shrt, words);
		if(cmp == 0) {
			strcpy(words, dict[i].ori);
			return true;
		}
	}
	
	return false;
}

int main() {
	FILE *fp = fopen("testdata.in", "r");
	
	if(fp == NULL) {
		printf("File not found!\n");
		return 1;
	}
	
	int T;
	fscanf(fp, "%d\n", &T);
	
	Dict dict[T];
	for(int i = 0; i < T; i++) {
		fscanf(fp, "%[^#]#%s\n", dict[i].shrt, dict[i].ori);
	}
	
	
	int TC;
	fscanf(fp, "%d\n", &TC);
	
	char sentence[TC][105];
	for(int i = 0; i < TC; i++) {
		fscanf(fp, "%[^\n]\n", sentence[i]);
		
		char words[105][105];
		int count = 0;
		
		char *token = strtok(sentence[i], " ");
		while(token != NULL) {
			strcpy(words[count], token);
			token = strtok(NULL, " ");
			count++;
		}
		
		printf("Case #%d:\n", i+1);
		for(int j = 0; j < count; j++) {
			search(dict, words[j], T);
			
			printf("%s", words[j]);
			if(j < count-1) {
				printf(" ");
			} else {
				printf("\n");
			}
		}
	}
	fclose(fp);
	return 0;
}
