#include <stdio.h>
#include <string.h> 

int NumOfData=1;

struct Mhs{
    int Price, Rooms, Bath, Car;
    char Loc[105], City[105], Type[105], Fur[105];
}Kmr[4000];

enum column{Location=1, City=2, Price=3, Rooms=4, Bathroom=5, Carpark=6, Type=7, Furnish=8, No=0};

void swap(struct Mhs *a, struct Mhs *b){
	struct Mhs temp;
	temp= *a;
	*a=*b;
	*b=temp;
}

void BubbleSortAscLoc(struct Mhs Kmr[], int size){
    for(int i=0; i<size-1; i++){
        for (int j=0; j<size-1; j++){
            if(strcmp(Kmr[j].Loc, Kmr[j+1].Loc)==1){
                swap (&Kmr[j], &Kmr[j+1]);
            }
        }
    }
}

void readFile(){
	char temp[1000];
	FILE *fp=fopen("file.csv", "r");
	fscanf(fp, "%[^\n]\n", temp);
	int data=0;
	while(!feof(fp)){
	    fscanf(fp, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n", Kmr[data].Loc, Kmr[data].City, &Kmr[data].Price, &Kmr[data].Rooms, &Kmr[data].Bath, &Kmr[data].Car, Kmr[data].Type, Kmr[data].Fur);
	    data++;
	    NumOfData++;
	}    
	fclose(fp);
}

void Menu(){
    printf("What do you want to do? \n 1. Display data\n 2. Search Data\n 3. Sort Data\n 4. Export Data\n 5. Exit\n");
	printf("Your choice: ");
}

void Display(struct Mhs Kmr[]){
    int show;
    printf("Number of rows:");
    scanf("%d", &show);
    if(show>NumOfData){
        show=NumOfData;
    }
    printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
    for (int i=0; i<show; i++){
        printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n", Kmr[i].Loc, Kmr[i].City, Kmr[i].Price, Kmr[i].Rooms, Kmr[i].Bath, Kmr[i].Car, Kmr[i].Type, Kmr[i].Fur);
    }

}

void Search(struct Mhs Kmr[]){
    char choose[100], Name[100];
    int flag=0, flag2=0, Value;
    do{
    flag=0;
    enum column choice=No;
    printf("Choose column: ");                  //Column Choosing
    scanf("%s", choose);
    
    if(strcmp(choose, "Location")==0){
	    choice=Location;
	    printf("What data do you want to find? ");
    }else if(strcmp(choose, "City")==0){
	    choice=City;
	    printf("What data do you want to find? ");
    }else if(strcmp(choose, "Price")==0){
	    choice=Price;
	    printf("What data do you want to find? ");
    }else if(strcmp(choose, "Rooms")==0){
	    choice=Rooms;
	    printf("What data do you want to find? ");
    }else if(strcmp(choose, "Bathroom")==0){
	    choice=Bathroom;
	    printf("What data do you want to find? ");
    }else if(strcmp(choose, "Carpark")==0){
	    choice=Carpark;
	    printf("What data do you want to find? ");
    }else if(strcmp(choose, "Type")==0){
	    choice=Type;
	    printf("What data do you want to find? ");
    }else if(strcmp(choose, "Furnish")==0){
	    choice=Furnish;
	    printf("What data do you want to find? ");
    }
//    printf("What data do you want to find? ");
    
    if(choice==City || choice==Location || choice==Type || choice==Furnish){
        scanf("%s", Name);getchar();
        
    }else if(choice==Price || choice==Rooms || choice==Bathroom || choice==Carpark){
        scanf("%d", &Value);  
    }

    switch(choice){
        case 1:             //Location
            for(int i=0; i<NumOfData; i++){
                if(strcmp(Name, Kmr[i].Loc)==0){
                    if(flag2==0){
                    	printf("Data found. Detail of data:\n");
						printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
	                    flag2=1;
	                }
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
            }
            break;
        case 2:             //City
            for(int i=0; i<NumOfData; i++){
                if(strcmp(Name, Kmr[i].City)==0){
                    if(flag2==0){
                    	printf("Data found. Detail of data:\n");
	                    printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
	                    flag2=1;
                	}
            	printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
            }
            break;
        case 3:             //Price
            for(int i=0; i<NumOfData; i++){
                if(Value==Kmr[i].Price){
                    if(flag2==0){
                    	printf("Data found. Detail of data:\n");
	                    printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
	                    flag2=1;
	                }
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
            }
            break;
        case 4:             //Rooms
            for(int i=0; i<NumOfData; i++){
                if(Value==Kmr[i].Rooms){
                    if(flag2==0){
                    	printf("Data found. Detail of data:\n");
	                    printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
	                    flag2=1;
	                }
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
            }
            break;
        case 5:             //Bathrooms
            for(int i=0; i<NumOfData; i++){
                if(Value==Kmr[i].Bath){
                    if(flag2==0){
                    	printf("Data found. Detail of data:\n");
	                    printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
	                    flag2=1;
	                }
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
            }
            break;
        case 6:             //Carpark
            for(int i=0; i<NumOfData; i++){
                if(Value==Kmr[i].Car){
                    if(flag2==0){
                    	printf("Data found. Detail of data:\n");
	                    printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
	                    flag2=1;
	                }
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
            }
            break;
        case 7:             //Type
            for(int i=0; i<NumOfData; i++){
                if(strcmp(Name, Kmr[i].Type)==0){
                    if(flag2==0){
                    	printf("Data found. Detail of data:\n");
		            	printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
		                flag2=1;
		            }
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
            }
            break;
        case 8:             //Furnish
        for(int i=0; i<NumOfData; i++){
                if(strcmp(Name, Kmr[i].Fur)==0){
                    if(flag2==0){
                    	printf("Data found. Detail of data:\n");
	                    printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
	                    flag2=1;
	                }
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
            }
            break;
        default:
            printf("Type a column name! (Case Sensitive)\n");
            flag=1;
            break;
    }
	if (flag2!=1){
        printf("Data not found!\n");
    }
    }while(flag==1);
}

void Sort(struct Mhs Kmr[]){
    char choose[100],By[100];
    int flag=0,size=NumOfData-1;
    enum column choice=No;
    do{
    flag=0;
    printf("Choose column: ");                  //Column Choosing
    scanf("%s",choose);

    if(strcmp(choose,"Location")==0){
        choice=Location;
    }else if(strcmp(choose,"City")==0){
        choice=City;
    }else if(strcmp(choose,"Price")==0){
        choice=Price;
    }else if(strcmp(choose,"Rooms")==0){
        choice=Rooms;
    }else if(strcmp(choose,"Bathroom")==0){
        choice=Bathroom;
    }else if(strcmp(choose,"Carpark")==0){
        choice=Carpark;
    }else if(strcmp(choose,"Type")==0){
        choice=Type;
    }else if(strcmp(choose,"Furnish")==0){
        choice=Furnish;
    }
    if(choice==0){
        flag=1;
        printf("Type a column name! (Case Sensitive)\n");
        }
    }while(flag==1);

    do{
    printf("Sort ascending or descending? (asc/des)\n");
    scanf("%s",By);getchar();
    }while(strcmp(By,"asc")!=0 && strcmp(By,"des")!=0);

    if(strcmp(By,"asc")==0){        //Ascending Sort
            switch (choice)
            {
            case 1:
                BubbleSortAscLoc(Kmr,NumOfData-1);
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 2:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(strcmp(Kmr[j].City,Kmr[j+1].City)==1){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 3:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(Kmr[j].Price>Kmr[j+1].Price){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 4:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(Kmr[j].Rooms>Kmr[j+1].Rooms){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 5:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(Kmr[j].Bath>Kmr[j+1].Bath){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 6:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(Kmr[j].Car>Kmr[j+1].Car){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 7:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(strcmp(Kmr[j].Type,Kmr[j+1].Type)==1){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 8:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(strcmp(Kmr[j].Fur,Kmr[j+1].Fur)==1){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            default:
                break;
            }

    }else {                         //Descending Sort
            switch (choice)
            {
            case 1:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(strcmp(Kmr[j].Loc,Kmr[j+1].Loc)==-1){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 2:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(strcmp(Kmr[j].City,Kmr[j+1].City)==-1){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 3:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(Kmr[j].Price<Kmr[j+1].Price){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 4:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(Kmr[j].Rooms<Kmr[j+1].Rooms){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 5:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(Kmr[j].Bath<Kmr[j+1].Bath){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 6:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(Kmr[j].Car<Kmr[j+1].Car){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 7:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(strcmp(Kmr[j].Type,Kmr[j+1].Type)==-1){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            case 8:
                for(int i=0;i<size-1;i++){
                    for (int j=0;j<size-1;j++){
                        if(strcmp(Kmr[j].Fur,Kmr[j+1].Fur)==-1){
                            swap (&Kmr[j],&Kmr[j+1]);
                        }
                    }
                }
                printf("Data found. Detail of data:\n");
                printf("||        Location         ||     City    ||   Price   || Rooms || Bathroom || Carpark ||   Type   ||   Furnish   ||\n");
                for (int i=0;i<10;i++){
                printf("||%25s||%13s||%11d||%7d||%10d||%9d||%10s||%13s||\n",Kmr[i].Loc,Kmr[i].City,Kmr[i].Price,Kmr[i].Rooms,Kmr[i].Bath,Kmr[i].Car,Kmr[i].Type,Kmr[i].Fur);
                }
                break;
            default:
                break;
            }
    }
}

void Export(struct Mhs Kmr[]){
    char filename[100];
    printf("File name: ");
    scanf("%s",filename);
    strcat(filename, ".csv");
    FILE *file = fopen(filename,"w");

    if(file == NULL){
        printf("File could not be created\n");
    }else{
        printf("Data successfully written to file %s!\n",filename);
        for (int data=0;data<NumOfData-1;data++){
        fprintf(file,"%s,%s,%d,%d,%d,%d,%s,%s\n",Kmr[data].Loc,Kmr[data].City,Kmr[data].Price,Kmr[data].Rooms,Kmr[data].Bath,Kmr[data].Car,Kmr[data].Type,Kmr[data].Fur);
    }
    }
}
int main(){
    int choice=0;
    readFile();
        do{

                Menu();
                scanf("%d", &choice);

                switch(choice){
                    case 1:
                    Display(Kmr);
                        break;
                    case 2:
                    Search(Kmr);
                        break;
                    case 3:
                    Sort(Kmr);
                        break;
                    case 4:
                    Export(Kmr);
                        break;
                    case 5:
                    printf("GoodBye!");
                        break;
                    default:
                        break;
                }

        }while(choice!=5);
            return 0;
            
}
