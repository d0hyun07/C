#include <stdio.h>

int main(){
	int n,sum=0,result;
	printf("�������� DNA������ �Է��ϼ��� : ");
	scanf("%d",&n);
	
	int i;
	/*for(i=0;i<10;i++){
		sum = sum+(n%10);
		n = n/10;
	}*/
	
	while(n>0){
		sum = sum+(n%10);
		n = n/10;
	}
	
	if(sum%7==4)
		printf("����");
	else
		printf("�Ϲ���"); 
}
