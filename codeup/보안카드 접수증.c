#include <stdio.h>

int main(){
	char name[21];
	int age;
	char code;
	double secure;
	
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s",&name);
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d",&age);
	fflush(stdin);
	printf("�μ��ڵ带  �Է��ϼ��� : ");
	scanf("%c",&code);
	printf("����Ű��  �Է��ϼ��� : ");
	scanf("%lf",&secure);
	
	printf("**********************\n");
	printf("�̸� : %s\n",name);
	printf("���� : %d\n",age);
	printf("�μ��ڵ� : %c\n",code);
	printf("����Ű : %lf\n",secure);
	printf("**********************\n");
	
}
