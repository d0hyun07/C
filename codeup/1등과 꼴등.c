#include <stdio.h>

int main(){
	int n, min=100,max=0,score,i;
	printf("�л����� �Է��ϼ��� : ");
	scanf("%d",&n);
	printf("������ �Է��ϼ���(0~100) : ");
	for(i=0;i<n;i++){
		scanf("%d",&score);
		if(score>max){
			max = score;
		}
		if(score<min){
			min = score;
		}
	}
	printf("1���� %d��, ����� %d��",max,min);
}
