#include <stdio.h>
#include <string.h>

struct x{
	char nameFriend[40];
	char nameTree[40];
};

int binarySearch(struct x records[], int left, int right, char find[])
{
	while(left<=right)
	{
		int mid= (right+left)/2;
		if(strcmp(records[mid].nameFriend, find)==0)
			return mid;
		else if(strcmp(records[mid].nameFriend,find)>0)
			right=mid-1;
		else
			left=mid+1;
	}
	return -1;
}

int main()
{
	FILE *file=fopen("testdata.txt", "r");
	
	if(file==NULL)
		return 0;
	
	int N, T; 
	
	struct x records[105];
	
	char find[40];
	fscanf(file, "%d\n", &N); 
	
	for(int i=0; i<N; i++)
		fscanf(file, "%[^#]#%[^\n]\n", &records[i].nameFriend, &records[i].nameTree);
		
//	for(int i=0; i<N; i++)
//		printf("%s - %s\n", records[i].nameFriend, records[i].nameTree);
		
	fscanf(file, "%d\n", &T);
	
	for(int i=0; i<T; i++)
	{
		fscanf(file, "%[^\n]\n", find);
//		printf("%s\n", find);
		int pos = binarySearch(records, 0, N, find);
		if(pos!=-1)
			printf("Case #%d: %s\n", i+1, records[pos].nameTree);
		else
			printf("Case #%d: N/A\n", i+1);
	}
	return 0;
}
