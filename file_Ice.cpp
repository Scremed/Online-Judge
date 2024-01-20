#include <stdio.h>


int main(){
	
	FILE *file=fopen("testdata.in", "r");
	
	if(file==NULL)
		return 0;
	
	int T;
	fscanf(file, "%d\n", &T);
	if(T<1 || T>100)
		return 0;
		
	for(int i=0; i<T; i++){
		int N;
		fscanf(file, "%d\n", &N);
		if(N<1 || N>100)
			return 0;
			
		int X[105]={};
		long long sum=0, perimeter=0;
		for(int j=0; j<N; j++){
			perimeter+=4;
			fscanf(file, "%d", &X[j]);
			if(X[j]<1 || X[j]>100)
				return 0;
			sum+=X[j];
			if(j==0 || j==N-1)
				perimeter+=2*X[j];
			else if(j>0){
				if(X[j]>X[j-1])
					perimeter+=2*(X[j]-X[j-1]);
				else
					perimeter+=2*(X[j-1]-X[j]);
			}
//			printf("if else : %d\n", perimeter);
//			printf(" %d %d\n", X[j], X[j-1]);
//			printf("up down: %d\n", perimeter);	
		}
		fscanf(file, "\n");
		printf("Case #%d: %lld %lld\n", i+1, perimeter, sum*4);
	}
	fclose(file);
	
	return 0;
}
