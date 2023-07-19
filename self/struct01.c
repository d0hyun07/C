#include <stdio.h>

typedef struct STUDENT{
	int no; 		//학생번호 
	int inf;		//정보점수 
	int mat; 		//수학점수 
	int sum; 		//합계 변수 
	double avg;  	//평균 변수 
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
