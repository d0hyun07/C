#include <stdio.h>

int main(){
	int x,y,max=0,i;
	printf("��� 3���� ����, ������ ���̸� ���ʷ� �Է��ϼ���.\n");
	for(i=0;i<3;i++){
		scanf("%d %d",&x,&y);
		if((x*y)>max){
			max = (x*y);
		}
	}
	printf("���� ū ����� ���̴� %d�Դϴ�.",max);
}
