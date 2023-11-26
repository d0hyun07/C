#include <stdio.h>

int main(){
	int i,j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	int num=5;
	for(i=0;i<num;i++){
    	for( j=num-1;j>i;j--){
        printf(" ");
    	}
	    
    for( j=0;j<2*i+1;j++){
		printf("*");
    }
    printf("\n");
}
}
