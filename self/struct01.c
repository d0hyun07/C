#include <stdio.h>

typedef struct STUDENT{
	int no; 		//�л���ȣ 
	int inf;		//�������� 
	int mat; 		//�������� 
	int sum; 		//�հ� ���� 
	double avg;  	//��� ���� 
}student;

int main(){
	int i,number;
	
	scanf("%d",&number);
	student a[101];
	
	for(i=0;i<number;i++){
		scanf("%d",&a[i].no);
		scanf("%d",&a[i].inf);
		scanf("%d",&a[i].mat);
		a[i].sum = a[i].inf + a[i].mat;
		a[i].avg = a[i].sum / 2;
	}
	for(i=0;i<number;i++){
		printf("%d %d %.1f\n",a[i].no,a[i].sum,a[i].avg);
	}
}
