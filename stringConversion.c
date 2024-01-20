#include <stdio.h>
#include <string.h>

void reverse(char str[105], int len) {
	char strTemp[105]; //create temporary string
	
	int i; //declare var i 
	int j = 0; //for str temp to count from 0
	for(i = len-1; i >= 0; i--) { //from the end of string
		strTemp[j] = str[i]; //set str to temp
		j++;
	}
	strTemp[j] = '\0'; //set the end of string
	
	strcpy(str, strTemp); //set the modified temp to str
	return;
}

void inversCaps(char str[105], int len) {
	int i;
	for(i = 0; i < len; i++) {
		if(str[i] >= 'a' && str[i] <= 'z') { //low to cap
			str[i] -= 32; //-32 based on ASCII decimal
		} 
		else if(str[i] >= 'A' && str[i] <= 'Z') { //cap to low
			str[i] += 32; //+32 based on ASCII decimal
		}
	}
	
	return;
}

int main() {
	char str[105];
	printf("Input string (max 100 characters): ");
	scanf("%[^\n]", str); //input string
	
	int len = strlen(str); //get the string length
	
	reverse(str, len); //call reverse function
	printf("Reversed string is \"%s\".\n", str);
	
	inversCaps(str, len); //call inverse capitalize function
	printf("Inverse capitilize string is \"%s\".\n", str);
	
	return 0;
}
