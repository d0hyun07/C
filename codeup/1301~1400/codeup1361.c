#include <stdio.h>

int main(){
	int n;
	int i,j,k;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		printf("**");
		printf("\n");
	}
}
