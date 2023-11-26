#include <stdio.h>


int main(){
	int i;
	char pass[21];
	printf("암호를 입력하세요 : ");
	scanf("%s",pass);
	printf("결과 1 : ");
	for(i=0;pass[i]!=NULL;i++)
		printf("%c",pass[i]+2);
	printf("\n");
	printf("결과 2 : ");
	for(i=0;pass[i]!=NULL;i++)
		printf("%c",(pass[i]*7)%80+48);
	
}
