#include <stdio.h>

int main(){
	int n,i,j,k;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(k=n-i;k>1;k--){
			printf(" ");
		}
		for(j=0;j<n;j++){
			printf("*");
		}
		printf("\n");
	}
}
