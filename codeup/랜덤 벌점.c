#include <stdio.h>
#include <stdlib.h>

int main(){
	int start, last, num;
	printf("*** ���� �̱� ���α׷� ***\n");
	printf("��ȣ�� ������ �Է��ϼ���(���۹�ȣ,��������ȣ) : ");
	scanf("%d %d",&start, &last);
	num = rand()%(last - start+1)+start;
	printf("�����մϴ�. ���� ��ȣ�� %d�Դϴ�.",num);
}
