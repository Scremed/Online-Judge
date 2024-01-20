/*
Name      : Louis Alexander Pekandi
NIM/Class : 2702272350/LA01

note: sort function and select function will 
      rewrite the struct.(for export purposes)
	  if you want to reset the data, exit and rerun again
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

struct Data{ 
	char loc1[30];
	char loc2[30];
	int price;
	int rooms;
	int bathroom;
	int carparks;
	char type[20];
	char furnish[20];
} props[4000]; //create a struct variable to store data

//function prototype
bool invalidInput(char input[10]);
void display(int rows, int n);
void selectRow(char col[30], char find[30], int *n);
void sortBy(char col[10], bool order, int left, int right);
void exportData(char filename[50], int n);

int main() {
	FILE *fp = fopen("file.csv", "r"); //open the file
	if(fp == NULL) { //if file not exist/not in the same folder
		printf("File not found!\n");
		return 1;
	}
	
	char header[255]; //get the header 
	if (fgets(header, sizeof(header), fp) == NULL) {
        printf("Error reading header.\n");
        fclose(fp);
        return 1;
    }
    
	int n = 0; //to count total data
	while(!feof(fp) && n < 4000) {
		fscanf(fp, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n",
		props[n].loc1, props[n].loc2, &props[n].price, 
		&props[n].rooms, &props[n].bathroom, 
		&props[n].carparks, props[n].type, props[n].furnish);
		n++;
	}
	fclose(fp); //close file
	
//	int i;
//	for(i = 0; i < n; i++) {
//		printf("%s, %s, %d, %d, %d, %d, %s, %s",
//		props[i].loc1, props[i].loc2, props[i].price, 
//		props[i].rooms, props[i].bathroom, 
//		props[i].carparks, props[i].type, props[i].furnish);
//	}
	
	//Notes
	printf("Note: Sort function and select function will rewrite the struct (for export purpose).\n");
	printf("      If you want to reset the data, exit and rerun again.\n");
	
	char choice;
	do{//print menu
		printf("What do you want to do?\n");
		printf("1. Display data\n");
		printf("2. Search data\n");
		printf("3. Sort data\n");
		printf("4. Export data\n");
		printf("5. Exit\n"); 
		
		printf("Your choice: "); 
		scanf(" %c", &choice);
        
		switch(choice) {
			case '1': { //display data
				int rows;
				do{ //loop if input is less than 1
					printf("Number of rows: ");
					scanf("%d", &rows);
					if(rows < 1) {
						printf("invalid input.\n");
					}
				} while(rows < 1);
				
				printf("\n");
				
				display(rows, n); //call display function
				break;
			}
				
			case '2':{ //find value from column, display all the matching value
				char col[30];
				char find[30];
				
				do{ //repeat if invalid
					printf("Location|City|Price|Rooms|");
					printf("Bathroom|Carpark|Type|Furnish\n");
					printf("Choose column: ");
					scanf("%s", col);
					if(invalidInput(col)) {
						printf("Invalid Input.\n");
					}
				} while(invalidInput(col));
				
				printf("What data do you want to find? ");
				scanf("%s", find);
				
				//for export purpose n will be reassigned with new value
				selectRow(col, find, &n); //call selectRow function
				break;
			}
				
			case '3':{ //sort data by column, asc/desc 
				char col[10];
				char order[5];
				
				do{ //loop if input is invalid
					printf("Location|City|Price|Rooms|");
					printf("Bathroom|Carpark|Type|Furnish\n");
					printf("Choose column: ");
					scanf("%s", col);
					if(invalidInput(col)) {
						printf("Invalid Input.\n");
					}
				} while(invalidInput(col));
				
				do{ //also loop if input is invalid
					printf("Sort ascending or descending (asc/desc)? ");
					scanf("%s", order);
					if(strcmp(order, "asc") != 0 && strcmp(order, "desc") != 0) {
						printf("Invalid Input.\n");
					}
				} while(strcmp(order, "asc") != 0 && strcmp(order, "desc") != 0);
				printf("\n");
				
				bool orderby = false; //to set ascending if true, descending false
				if(strcmp(order, "asc") == 0) {
					orderby = true;
				}
				//			       left right
				sortBy(col, orderby, 0, n-1); //call sortBy function
				
				//print the sorted data
				printf("Data Found. Detail of data (first 10 data):\n");
				int i;
				printf("%-27s%-15s%-10s%-6s%-10s%-10s%-10s%-15s\n", "Location", "City", 
				"Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
				for(i = 0; i < 10; i++) {
					printf("%-27s%-15s%-10d%-6d%-10d%-10d%-10s%-15s\n",
					props[i].loc1, props[i].loc2, props[i].price, 
					props[i].rooms, props[i].bathroom, 
					props[i].carparks, props[i].type, props[i].furnish);
				}
				printf("\n");
				break;
			}
				
			case '4':{ //export data based on sorted data and/or selected data
				char filename[50];
				printf("File name: ");
				scanf("%s", filename);
				exportData(filename, n); //call exportData function
				break;
			}
			
			case '5': //Exit
				printf("Have a nice day!\n");
				return 0;
				
			default:
				printf("Invalid choice. Please enter a valid option.\n\n");
		}
	} while (choice != '5');
	
	return 0;
}

void display(int rows, int n) {
	
	//display data from index 0 to rows
	printf("%-27s%-15s%-10s%-6s%-10s%-10s%-10s%-15s\n", "Location", "City", 
	"Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
	if(rows > n) { // if the input is higher than the data
		rows = n;  // set to the max of data size
	}
	
	int i;
	for(i = 0; i < rows; i++) {
		printf("%-27s%-15s%-10d%-6d%-10d%-10d%-10s%-15s\n",
		props[i].loc1, props[i].loc2, props[i].price, 
		props[i].rooms, props[i].bathroom, 
		props[i].carparks, props[i].type, props[i].furnish);
	}
	printf("\n");
	return;
}

void selectRow(char col[30], char find[30], int *n){//pointers to change the size data
	int i, j = 0; //j is for the main data index
	sortBy(col, true, 0, *n);
	if(strcmp(col, "Location") == 0){ //Column Location
		for(i = 0; i < *n; i++) {
			if(strcmp(props[i].loc1, find) == 0) { //rewrite main index
				props[j] = props[i];
				j++;
			}
		}
	}
	else if(strcmp(col, "City") == 0){//Column City
		for(i = 0; i < *n; i++) {
			if(strcmp(props[i].loc2, find) == 0) {
				props[j] = props[i];
				j++;
			}
		}
	}
	else if(strcmp(col, "Price") == 0){//Column Price
		int temp = atoi(find);
		for(i = 0; i < *n; i++) {
			if(props[i].price == temp) {
				props[j] = props[i];
				j++;
			}
		}
	}
	else if(strcmp(col, "Rooms") == 0){//Column Rooms
		int temp = atoi(find);
		for(i = 0; i < *n; i++) {
			if(props[i].rooms == temp) {
				props[j] = props[i];
				j++;
			}
		}
	}
	else if(strcmp(col, "Bathroom") == 0){//Column Bathroom
		int temp = atoi(find);
		for(i = 0; i < *n; i++) {
			if(props[i].bathroom == temp) {
				props[j] = props[i];
				j++;
			}
		}
	}
	else if(strcmp(col, "Carpark") == 0){//Column Carpark
		int temp = atoi(find);
		for(i = 0; i < *n; i++) {
			if(props[i].carparks == temp) {
				props[j] = props[i];
				j++;
			}
		}
	}
	else if(strcmp(col, "Type") == 0){//Column Type
		for(i = 0; i < *n; i++) {
			if(strcmp(props[i].type, find) == 0) {
				props[j] = props[i];
				j++;
			}
		}
	}
	else if(strcmp(col, "Furnish") == 0){//Column Furnish
		for(i = 0; i < *n; i++) {
			if(strcmp(props[i].furnish, find) == 0) {
				props[j] = props[i];
				j++;
			}
		}
	}
	
	if(j > 0) { //if there are macthing data, print all the matching data
		printf("Data found. Detail of data:\n");
		printf("%-27s%-15s%-10s%-6s%-10s%-10s%-10s%-15s\n", "Location", "City", 
		"Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
		for(i = 0; i < j; i++) {
			printf("%-27s%-15s%-10d%-6d%-10d%-10d%-10s%-15s\n",
			props[i].loc1, props[i].loc2, props[i].price, 
			props[i].rooms, props[i].bathroom, 
			props[i].carparks, props[i].type, props[i].furnish);
		} printf("\n");
		//for export purpose, set n to j
		*n = j;
		return;
	} 
	else{// if there is no matching data, return
		printf("Data not found!\n");
		return;
	}
}

void merge(char col[10], bool order, int left, int mid, int right) {
	//create data size for left and right
	int leftSize = mid-left+1;
	int rightSize = right-mid;
	int i, j;
	
	//create struct data for left and right
	struct Data leftDat[leftSize], rightDat[rightSize];
	
	//set left data to props from left to mid
	for(i = 0; i < leftSize; i++) 
		leftDat[i] = props[left+i];
	
	//set right data to props from mid to right
	for(j = 0; j < rightSize; j++)
		rightDat[j] = props[mid+j+1];
		
	//set the index pointer for left and right data from start
	//k for the main index pointer
	i = 0; j = 0; 
	int k = left;
	
	//Sort data based on the column
	if(strcmp(col, "Location") == 0) {//Column Location
		while(i < leftSize && j < rightSize) {
			//if order is asc and left is lesser or equal
			//or order desc and left is larger
			//assign left data to main data
			if((order && strcmp(leftDat[i].loc1, rightDat[j].loc1) < 0) ||
			  (!order && strcmp(leftDat[i].loc1, rightDat[j].loc1) >= 0)){
				props[k] = leftDat[i];
				i++;
			} else { // and the other way
				props[k] = rightDat[j];
				j++;
			}
			k++;
		}
	} 
	
	else if(strcmp(col, "City") == 0) {//Column City
		while(i < leftSize && j < rightSize) {
			if((order && strcmp(leftDat[i].loc2, rightDat[j].loc2) <= 0) ||
			  (!order && strcmp(leftDat[i].loc2, rightDat[j].loc2) > 0)){
				props[k] = leftDat[i];
				i++;
			} else {
				props[k] = rightDat[j];
				j++;
			}
			k++;
		}
	}
		
	else if(strcmp(col, "Price") == 0) {//Column Price
		while(i < leftSize && j < rightSize) {
			if((order && leftDat[i].price <= rightDat[j].price) ||
			  (!order && leftDat[i].price > rightDat[j].price)){
				props[k] = leftDat[i];
				i++;
			} else {
				props[k] = rightDat[j];
				j++;
			}
			k++;
		}
	} 
	
	else if(strcmp(col, "Rooms") == 0) {//Column Rooms
		while(i < leftSize && j < rightSize) {
			if((order && leftDat[i].rooms <= rightDat[j].rooms) ||
			  (!order && leftDat[i].rooms > rightDat[j].rooms)){
				props[k] = leftDat[i];
				i++;
			} else {
				props[k] = rightDat[j];
				j++;
			}
			k++;
		}
	} 
	
	else if(strcmp(col, "Bathroom") == 0) {//Column Bathroom
		while(i < leftSize && j < rightSize) {
			if((order && leftDat[i].bathroom <= rightDat[j].bathroom) ||
			  (!order && leftDat[i].bathroom > rightDat[j].bathroom)){
				props[k] = leftDat[i];
				i++;
			} else {
				props[k] = rightDat[j];
				j++;
			}
			k++;
		}
	} 
	
	else if(strcmp(col, "Carpark") == 0) {//Column Carpark
		while(i < leftSize && j < rightSize) {
			if((order && leftDat[i].carparks <= rightDat[j].carparks) ||
			  (!order && leftDat[i].carparks > rightDat[j].carparks)){
				props[k] = leftDat[i];
				i++;
			} else {
				props[k] = rightDat[j];
				j++;
			}
			k++;
		}
	} 
	
	else if(strcmp(col, "Type") == 0) {//Column Type
		while(i < leftSize && j < rightSize) {
			if(order && strcmp(leftDat[i].type, rightDat[j].type) <= 0 ||
			  (!order && strcmp(leftDat[i].type, rightDat[j].type) > 0)){
				props[k] = leftDat[i];
				i++;
			} else {
				props[k] = rightDat[j];
				j++;
			}
			k++;
		}
	} 
	
	else if(strcmp(col, "Furnish") == 0) {//Column Furnish
		while(i < leftSize && j < rightSize) {
			if((order && strcmp(leftDat[i].furnish, rightDat[j].furnish) <= 0) ||
			  (!order && strcmp(leftDat[i].furnish, rightDat[j].furnish) > 0)){
				props[k] = leftDat[i];
				i++;
			} else {
				props[k] = rightDat[j];
				j++;
			}
			k++;
		}
	}
	
	//if there are remaining data in the right/left
	//assign it to the main
	while(i < leftSize) {
		props[k] = leftDat[i];
		i++;
		k++;
	}
	while(j < rightSize) {
		props[k] = rightDat[j];
		j++;
		k++;
	}
}

void sortBy(char col[10], bool order, int left, int right){
	//Using merge sort to efficiently sort the data
	if(left < right) {
	int mid = left + (right-left) / 2;
	
	//recursively divide the data
	sortBy(col, order, left, mid);
	sortBy(col, order, mid+1, right);
	
	//merge and sort the data
	merge(col, order, left, mid, right);
	}
}

void exportData(char filename[50], int n){
	//add file type at the end of input string
	strcat(filename, ".csv");
	//open new file
	FILE *nf = fopen(filename, "w"); //using write mode
	
	if(nf == NULL) {
		printf("File couldn't be created!\n");
		return;
	}
	
	fprintf(nf, "Location,City,Price,Rooms,Bathroom,Carpark,Type,Furnish\n");
	int i;
	for(i = 0; i < n; i++) { //write the data to the file
		fprintf(nf, "%s,%s,%d,%d,%d,%d,%s,%s\n",
			props[i].loc1, props[i].loc2, props[i].price, 
			props[i].rooms, props[i].bathroom, 
			props[i].carparks, props[i].type, props[i].furnish);
	}
	
	printf("Data successfully written to file %s!\n", filename);
	return;
}

bool invalidInput(char input[10]) { //for validation
	if(strcmp(input, "Location") == 0) return false;
	else if(strcmp(input, "City") == 0) return false;
	else if(strcmp(input, "Price") == 0) return false;
	else if(strcmp(input, "Rooms") == 0) return false;
	else if(strcmp(input, "Bathroom") == 0) return false;	
	else if(strcmp(input, "Carpark") == 0) return false;
	else if(strcmp(input, "Type") == 0) return false;
	else if(strcmp(input, "Furnish") == 0) return false;
	else return true;
}
