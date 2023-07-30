#include <stdio.h>

int main(){
	int h1,h2,i,j,k;
	char d;
	scanf("%d %d %c",&h1,&h2,&d);
	
	switch(d){
		case 'L':
			for(i=0;i<h1;i++){
				for(k=0;k<i;k++){
					printf(" ");
				}
				for(j=0;j<h2;j++){
					printf("*");
				}
				printf("\n");
			}
			break;
		case 'R':
			for(i=0;i<h1;i++){
				for(k=h1-i;k>1;k--){
					printf(" ");
				}
				for(j=0;j<h2;j++){
					printf("*");
				}
				printf("\n");
			}
			break;
	}
}
