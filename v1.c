#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//long int tab[][2];

int fr(int v);

int main(int argc, char* argv[]){
	
	int val;
	while(val!=1){
	printf("entrez une valeur ");
	scanf("%d",&val);
	fr(val);
	}
	
	//pthread_t thr[1];
}

int fr(int v){
	int temp;
	if(v!=1){
		if(v%2==0){
			temp = v/2;
			printf("%d ",temp);		
	} else {
			temp = 3*v+1;
			printf("%d ",temp);
		}
		return fr(temp);
	} else {
		printf("\n"); 
		return 1;
	}
		
}
