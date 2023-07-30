#include <stdio.h>

int main(){
	int sum,i,j;
	scanf("%d",&sum);
	
	for(i=1;i<=6;i++){
		for(j=1;j<=6;j++){
			if(i+j==sum){
				printf("%d %d\n",i,j);
			}
		}
	}
}
