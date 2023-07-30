#include <stdio.h>

int main(){
	int num;
	int i,j;
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		for(j=num-1;j>i;j--){
			printf(" ");
		}
		
		for(j=0;j<2*i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<num;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		
		for(j=2*num-1;j>2*i;j--){
			printf("*");
		}
		printf("\n");
	}
}
