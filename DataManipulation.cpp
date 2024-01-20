#include <stdio.h>
#include <string.h>

typedef struct {
	char loc1[30];
	char loc2[30];
	int price;
	int rooms;
	int bathroom;
	int carparks;
	char type[20];
	char furnish[20];
} Data;

int main() {
	FILE *fp = fopen("file.csv", "r"); //open the file
	if(fp == NULL) { //if file not exist/not in the same folder
		printf("File not found!\n");
		return 1;
	}
	
	Data props[4000];
	int n = 0;
	while(n < 10) {
		fscanf(fp, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^,]",
		props[n].loc1, props[n].loc2, &props[n].price, 
		&props[n].rooms, &props[n].bathroom, 
		&props[n].carparks, props[n].type, props[n].furnish);
		n++;
	}
	
	n = 1;
	printf("%s, %s ,%d ,%d ,%d ,%d , %s, %s\n",
		props[n].loc1, props[n].loc2, props[n].price, 
		props[n].rooms, props[n].bathroom, 
		props[n].carparks, props[n].type, props[n].furnish);
	
//	for(int i = 0; i < 11; i++) {
//		printf("%s, %s, %d, %d, %d, %d, %s, %s\n",
//		props[i].loc1, props[i].loc2, props[i].price, 
//		props[i].rooms, props[i].bathroom, 
//		props[i].carparks, props[i].type, props[i].furnish);
//	}
	
//	//print menu
//	printf("What do you want to do?\n");
//	printf("1. Display data\n");
//	printf("2. Search data\n");
//	printf("3. Sort data\n");
//	printf("4. Export data\n");
//	printf("5. Exit\n"); 
//	
//	int choice;
//	printf("Your choice: ");
//	scanf("%d", &choice);
//	
//	switch(choice):
		
		   
	return 0;
}
