#include <stdio.h>

int main(){
	int n, min=100,max=0,score,i;
	printf("학생수를 입력하세요 : ");
	scanf("%d",&n);
	printf("점수를 입력하세요(0~100) : ");
	for(i=0;i<n;i++){
		scanf("%d",&score);
		if(score>max){
			max = score;
		}
		if(score<min){
			min = score;
		}
	}
	printf("1등은 %d점, 꼴찌는 %d점",max,min);
}
