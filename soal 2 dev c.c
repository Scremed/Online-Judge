#include <stdio.h>
#include <string.h>

struct data{
	char location[30];
	char city[30];
	char price[30];
	char rooms[30];
	char bathroom[30];
	char carpark[30];
	char type[30];
	char furnish[30];
};

// Function to display the first x data based on input
void display(struct data excel[], int dC, int numberOfRows){
	if(numberOfRows>dC)
		numberOfRows=dC;
	printf("\n");
	printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
	for(int i=0; i<numberOfRows; i++)
		printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", excel[i].location, excel[i].city, excel[i].price, excel[i].rooms, 
		excel[i].bathroom, excel[i].carpark, excel[i].type, excel[i].furnish);
	printf("\n");
}

// Merge Sort Function to sort by ascending or descending
void merge(struct data excel[], int left, int mid, int right, char column[], char query[]){
	int i, j, k;
	int l=mid-left+1;
	int r=right-mid;
	
	struct data L_excel[l], R_excel[r];
	
	if(strcmp(column, "Location")==0){
		for(int i=0; i<l; i++)
			L_excel[i]=excel[left+i];
		for(int j=0; j<r; j++)
			R_excel[j]=excel[mid+j+1];
		
		i=0, j=0, k=left;
		
		while(i<l && j<r){
			if(strcmp(query, "asc")==0){
				if(strcmp(L_excel[i].location, R_excel[j].location)<0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}else if(strcmp(query, "dsc")==0){
				if(strcmp(L_excel[i].location, R_excel[j].location)>=0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}
		}
	}else if(strcmp(column, "City")==0){
		for(int i=0; i<l; i++)
			L_excel[i]=excel[left+i];
		for(int j=0; j<r; j++)
			R_excel[j]=excel[mid+j+1];
		
		i=0, j=0, k=left;
		
		while(i<l && j<r){
			if(strcmp(query, "asc")==0){
				if(strcmp(L_excel[i].city, R_excel[j].city)<0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}else if(strcmp(query, "dsc")==0){
				if(strcmp(L_excel[i].city, R_excel[j].city)>=0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}
		}
	}else if(strcmp(column, "Price")==0){
		for(int i=0; i<l; i++)
			L_excel[i]=excel[left+i];
		for(int j=0; j<r; j++)
			R_excel[j]=excel[mid+j+1];
		
		i=0, j=0, k=left;
		
		while(i<l && j<r){
			if(strcmp(query, "asc")==0){
				if(strcmp(L_excel[i].price, R_excel[j].price)<0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}else if(strcmp(query, "dsc")==0){
				if(strcmp(L_excel[i].price, R_excel[j].price)>=0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}
		}
	}else if(strcmp(column, "Rooms")==0){
		for(int i=0; i<l; i++)
			L_excel[i]=excel[left+i];
		for(int j=0; j<r; j++)
			R_excel[j]=excel[mid+j+1];
		
		i=0, j=0, k=left;
		
		while(i<l && j<r){
			if(strcmp(query, "asc")==0){
				if(strcmp(L_excel[i].rooms, R_excel[j].rooms)<0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}else if(strcmp(query, "dsc")==0){
				if(strcmp(L_excel[i].rooms, R_excel[j].rooms)>=0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}
		}
	}else if(strcmp(column, "Bathroom")==0){
		for(int i=0; i<l; i++)
			L_excel[i]=excel[left+i];
		for(int j=0; j<r; j++)
			R_excel[j]=excel[mid+j+1];
		
		i=0, j=0, k=left;
		
		while(i<l && j<r){
			if(strcmp(query, "asc")==0){
				if(strcmp(L_excel[i].bathroom, R_excel[j].bathroom)<0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}else if(strcmp(query, "dsc")==0){
				if(strcmp(L_excel[i].bathroom, R_excel[j].bathroom)>=0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}
		}
	}else if(strcmp(column, "Carpark")==0){
		for(int i=0; i<l; i++)
			L_excel[i]=excel[left+i];
		for(int j=0; j<r; j++)
			R_excel[j]=excel[mid+j+1];
		
		i=0, j=0, k=left;
		
		while(i<l && j<r){
			if(strcmp(query, "asc")==0){
				if(strcmp(L_excel[i].carpark, R_excel[j].carpark)<0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}else if(strcmp(query, "dsc")==0){
				if(strcmp(L_excel[i].carpark, R_excel[j].carpark)>=0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}
		}
	}else if(strcmp(column, "Type")==0){
		for(int i=0; i<l; i++)
			L_excel[i]=excel[left+i];
		for(int j=0; j<r; j++)
			R_excel[j]=excel[mid+j+1];
		
		i=0, j=0, k=left;
		
		while(i<l && j<r){
			if(strcmp(query, "asc")==0){
				if(strcmp(L_excel[i].type, R_excel[j].type)<0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}else if(strcmp(query, "dsc")==0){
				if(strcmp(L_excel[i].type, R_excel[j].type)>=0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}
		}
	}else if(strcmp(column, "Furnish")==0){
		for(int i=0; i<l; i++)
			L_excel[i]=excel[left+i];
		for(int j=0; j<r; j++)
			R_excel[j]=excel[mid+j+1];
		
		i=0, j=0, k=left;
		
		while(i<l && j<r){
			if(strcmp(query, "asc")==0){
				if(strcmp(L_excel[i].furnish, R_excel[j].furnish)<0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}else if(strcmp(query, "dsc")==0){
				if(strcmp(L_excel[i].furnish, R_excel[j].furnish)>=0){
					excel[k]=L_excel[i];
					i++, k++;
				}else{
					excel[k]=R_excel[j];
					j++, k++;
				}
			}
		}
	}
	while(i<l){
		excel[k]=L_excel[i];
		i++, k++;
	}
	while(j<r){
		excel[k]=R_excel[j];
		j++, k++;
	}
}

// Merge Sort Function
void sortBy(struct data excel[], int left, int right, char column[], char query[]){
	if(left<right)
	{
		int mid=(left+right)/2;
		sortBy(excel, left, mid, column, query);
		sortBy(excel, mid+1, right, column, query);
		merge(excel, left, mid, right, column, query);
	}
}

// Function to check if the input is within the column options
int checkCol(char input[]){
	if(strcmp(input, "Location")==0 || strcmp(input, "City")==0 ||
	strcmp(input, "Price")==0 || strcmp(input, "Rooms")==0 ||
	strcmp(input, "Bathroom")==0 || strcmp(input, "Carpark")==0 ||
	strcmp(input, "Type")==0 || strcmp(input, "Furnish")==0){
		return 1;
	}else
		return 0;
}

// Function to check if the input is "asc" or "dsc"
int checkOrder(char input[]){
	if(strcmp(input, "asc")==0 || strcmp(input, "dsc")==0)
		return 1;
	else
		return 0;
}

// Function to print the data if found and show not found if data doesnt exist
int printExistence(struct data excel[], int dC, char column[], char search[]){
	if(strcmp(column, "Location")==0){
		int flag=0;
		for(int i=0; i<dC; i++){
			if(strcmp(excel[i].location, search)==0){
				flag++;
				if(flag==1){
					printf("\nData found. Detail of data:\n");
					printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
				}
				printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", excel[i].location, excel[i].city, excel[i].price, excel[i].rooms, 
				excel[i].bathroom, excel[i].carpark, excel[i].type, excel[i].furnish);
				
			}
			if(i==dC-1 && flag==0)
				printf("\nData not found!\n");
		}
		printf("\n");
	}
	else if(strcmp(column, "City")==0){
		int flag=0;
		for(int i=0; i<dC; i++){
			if(strcmp(excel[i].city, search)==0){
				flag++;
				if(flag==1){
					printf("\nData found. Detail of data:\n");
					printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
				}
				printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", excel[i].location, excel[i].city, excel[i].price, excel[i].rooms, 
				excel[i].bathroom, excel[i].carpark, excel[i].type, excel[i].furnish);
				
			}
			if(i==dC-1 && flag==0)
				printf("\nData not found!\n");
		}
		printf("\n");
	}
	else if(strcmp(column, "Price")==0){
		int flag=0;
		for(int i=0; i<dC; i++){
			if(strcmp(excel[i].price, search)==0){
				flag++;
				if(flag==1){
					printf("\nData found. Detail of data:\n");
					printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
				}
				printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", excel[i].location, excel[i].city, excel[i].price, excel[i].rooms, 
				excel[i].bathroom, excel[i].carpark, excel[i].type, excel[i].furnish);
				
			}
			if(i==dC-1 && flag==0)
				printf("\nData not found!\n");
		}
		printf("\n");
	}
	else if(strcmp(column, "Rooms")==0){
		int flag=0;
		for(int i=0; i<dC; i++){
			if(strcmp(excel[i].rooms, search)==0){
				flag++;
				if(flag==1){
					printf("\nData found. Detail of data:\n");
					printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
				}
				printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", excel[i].location, excel[i].city, excel[i].price, excel[i].rooms, 
				excel[i].bathroom, excel[i].carpark, excel[i].type, excel[i].furnish);
				
			}
			if(i==dC-1 && flag==0)
				printf("\nData not found!\n");
		}
		printf("\n");
	}
	else if(strcmp(column, "Bathroom")==0){
		int flag=0;
		for(int i=0; i<dC; i++){
			if(strcmp(excel[i].bathroom, search)==0){
				flag++;
				if(flag==1){
					printf("\nData found. Detail of data:\n");
					printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
				}
				printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", excel[i].location, excel[i].city, excel[i].price, excel[i].rooms, 
				excel[i].bathroom, excel[i].carpark, excel[i].type, excel[i].furnish);
				
			}
			if(i==dC-1 && flag==0)
				printf("\nData not found!\n");
		}
		printf("\n");
	}
	else if(strcmp(column, "Carpark")==0){
		int flag=0;
		for(int i=0; i<dC; i++){
			if(strcmp(excel[i].carpark, search)==0){
				flag++;
				if(flag==1){
					printf("\nData found. Detail of data:\n");
					printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
				}
				printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", excel[i].location, excel[i].city, excel[i].price, excel[i].rooms, 
				excel[i].bathroom, excel[i].carpark, excel[i].type, excel[i].furnish);
				
			}
			if(i==dC-1 && flag==0)
				printf("\nData not found!\n");
		}
		printf("\n");
	}
	else if(strcmp(column, "Type")==0){
		int flag=0;
		for(int i=0; i<dC; i++){
			if(strcmp(excel[i].type, search)==0){
				flag++;
				if(flag==1){
					printf("\nData found. Detail of data:\n");
					printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
				}
				printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", excel[i].location, excel[i].city, excel[i].price, excel[i].rooms, 
				excel[i].bathroom, excel[i].carpark, excel[i].type, excel[i].furnish);
				
			}
			if(i==dC-1 && flag==0)
				printf("\nData not found!\n");
		}
		printf("\n");
	}
	else if(strcmp(column, "Furnish")==0){
		int flag=0;
		for(int i=0; i<dC; i++){
			if(strcmp(excel[i].furnish, search)==0){
				flag++;
				if(flag==1){
					printf("\nData found. Detail of data:\n");
					printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
				}
				printf("%-28s%-20s%-11s%-11s%-11s%-11s%-11s%s\n", excel[i].location, excel[i].city, excel[i].price, excel[i].rooms, 
				excel[i].bathroom, excel[i].carpark, excel[i].type, excel[i].furnish);
				
			}
			if(i==dC-1 && flag==0)
				printf("\nData not found!\n");
		}
		printf("\n");
	}
}

int main(){
	FILE *file = fopen("file.csv", "r");
	
	if(file==NULL)
		return 0;
	
	struct data excel[4000];
	
	char title1[40], title2[30], title3[30], title4[30], title5[30], title6[30], title7[30], title8[30];
	// dC = dataCount
	fscanf(file, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", title1, title2, title3, title4, title5, title6, title7, title8);
	int dC=0;
	printf("%s %s %s %s %s %s %s %s\n", title1, title2, title3, title4, title5, title6, title7, title8);
	
	while(!feof(file)){
		fscanf(file, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n", excel[dC].location, excel[dC].city, excel[dC].price, 
		excel[dC].rooms, excel[dC].bathroom, excel[dC].carpark, excel[dC].type, excel[dC].furnish);
		dC++;
	}
	fclose(file);
	
	printf("%s %s %s %s %s %s\n", excel[1].location, excel[1].city, excel[1].price, excel[1].rooms, excel[1].bathroom);
	printf("%d\n", dC);
	
	int choice;
	do{
		printf("What do you want to do?\n");
		printf("1. Display Data\n");
		printf("2. Search Data\n");
		printf("3. Sort Data\n");
		printf("4. Export Data\n");
		printf("5. Exit\n");
		printf("Your choice: ");
		scanf("%d", &choice);
		
		if(choice==1){
			int numberOfRows;
			do{
				printf("Number of rows: ");
				scanf("%d", &numberOfRows);
			}while(numberOfRows<1);
			
			display(excel, dC, numberOfRows);
			
		}
		else if(choice==2){
			char column[50], queryValue[50];
			int exist=0, order=0;
			do{
				printf("Options: Location | City | Price | Rooms | Bathroom | Carpark | Type | Furnish\n"); 
				printf("Choose column: "); getchar();
				scanf("%[^\n]", column); 
				exist = checkCol(column);
			}while(exist!=1);
			
			printf("What data do you want to find? "); getchar();
			scanf("%[^\n]", queryValue);
			printExistence(excel, dC, column, queryValue);
					
		}
		else if(choice==3){
			char column[50], ascOrDsc[50];
			int exist=0, order=0;
			do{
				printf("Options: Location | City | Price | Rooms | Bathroom | Carpark | Type | Furnish\n"); 
				printf("Choose column: "); getchar();
				scanf("%[^\n]", column); 
				exist = checkCol(column);
			}while(exist!=1);
			
			do{
				printf("Options: asc | dsc\n"); 
				printf("Sort ascending or descending? "); getchar();
				scanf("%[^\n]", ascOrDsc); 
				order = checkOrder(ascOrDsc);
			}while(order!=1);
			
			sortBy(excel, 0, dC-1, column, ascOrDsc);
			
			display(excel, dC, 10);
			
		}
		else if(choice==4){
			char fileName[100];
			printf("File name: ");
			scanf("%s", fileName);
			strcat(fileName, ".csv");
			
	
			FILE *writeToFile=fopen(fileName, "w");
			
			if(writeToFile==NULL)
				printf("File does not exist\n");

			fprintf(writeToFile, "%s,%s,%s,%s,%s,%s,%s,%s\n", title1, title2, title3, title4, title5, title6, title7, title8);
			for(int i=0; i<dC; i++)
				fprintf(writeToFile, "%s,%s,%s,%s,%s,%s,%s,%s\n", excel[i].location, excel[i].city, excel[i].price, excel[i].rooms, 
				excel[i].bathroom, excel[i].carpark, excel[i].type, excel[i].furnish);
			fclose(writeToFile);
			
			printf("\nData successfully written to file %s!\n\n", fileName);
		}
		else if(choice==5){
			printf("\nGoodbye :(\n");
			return 0;
		}
	} while(choice!=5);
	
	return 0;
}
