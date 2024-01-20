#include <stdio.h>
#include <string.h>

void bubbleSort(char string[], int len){
	for(int i=0; i<len-1; i++){
		for(int j=0; j<len-i-1; j++){
			if(string[j]>string[j+1]){
				char temp=string[j];
				string[j]=string[j+1];
				string[j+1]=temp;			
			}
		}
	}
}

int main() {
    char string[100];
    scanf("%s", string);
    char find[20];
    scanf("%s", find);

    int len = strlen(string);
    int len2 = strlen(find);
    bubbleSort(string, len);
	bubbleSort(find, len2);

    printf("Original String: %s\n", string);

    printf("Characters in original string matching \"%s\": ", find);

    for (int i = 0; i < len; i++) {
        if (strchr(find, string[i]) != NULL) {
            printf("%c", string[i]);
        }
    }

    printf("\n");

    return 0;
}

