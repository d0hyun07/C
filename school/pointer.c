#include <stdio.h>


int main(){
	int i;
	char pass[21];
	printf("��ȣ�� �Է��ϼ��� : ");
	scanf("%s",pass);
	printf("��� 1 : ");
	for(i=0;pass[i]!=NULL;i++)
		printf("%c",pass[i]+2);
	printf("\n");
	printf("��� 2 : ");
	for(i=0;pass[i]!=NULL;i++)
		printf("%c",(pass[i]*7)%80+48);
	
}
