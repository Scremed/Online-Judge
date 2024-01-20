#include <stdio.h>

int counter = 0;

struct Item{
	char name[100];
	int price;
} itemList[100];

void readFile() {
	counter = 0;
	
	//open file
	//r -> read
	FILE *fp = fopen("Item.txt", "r");
	
	//validasi jika NULL
	if(fp == NULL) {
		printf("File Error!");
		return;
	}
	
	
	//selama masih ada data lakukan loop
	while(!feof(fp)) {
		fscanf(fp, "%[^#]#%d\n", itemList[counter].name, &itemList[counter].price);
		counter++;
	}
	
	//tutup file
	fclose(fp);
}

void printData() {
	for(int i = 0; i < counter; i++) {
		printf("Nama: %s, Harga: %d\n", itemList[i].name, itemList[i].price);
	}
	
}

void appendFile() {
	char name[255];
	int price;
	printf("Nama: ");
	scanf("%s", name); getchar();
	printf("Price: ");
	scanf("%d", &price); getchar();
	
	
	//a -> append dari data sebelumnya
	FILE *fp = fopen("Item.txt", "a");
	if(fp == NULL) {
		printf("File Error!");
		return;
	}
	
	fprintf(fp, "\n");
	fprintf(fp, "%s#%d", name, price);
	
	fclose(fp);
}

void writeFile() {
	// w -> Write
	//menulis ulang semua data dalam file
	FILE *fp = fopen("Item.txt", "w");
	if(fp == NULL) {
		printf("File Error!");
		return;
	}
	
	fprintf(fp, "%s#%d", "Pensil", 30);
	
	fclose(fp);
}

int main() {
//	readFile();
//	printData();
	appendFile();
//	writeFile();
	
	return 0;
}
