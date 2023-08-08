#include <stdio.h>

int main(){
	int i,j;
	for(j=1;j<=9;j++){
		for(i=1;i<=3;i++){
			printf("%d * %d = %d\t",i, j, i*j);
			
		}
		printf("\n");
		
	}
	printf("\n");
	for(j=1;j<=9;j++){
		for(i=4;i<=6;i++){
			printf("%d * %d = %d\t",i, j, i*j);
		}
		printf("\n");
		
	}
	printf("\n");
	for(j=1;j<=9;j++){
		for(i=7;i<=9;i++){
			printf("%d * %d = %d\t",i, j, i*j);
		}
		printf("\n");
		
	}
}
