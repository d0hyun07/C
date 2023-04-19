#include <stdio.h>

int main(){
	int x,y,max=0,i;
	printf("운동장 3개의 가로, 세로의 길이를 차례로 입력하세요.\n");
	for(i=0;i<3;i++){
		scanf("%d %d",&x,&y);
		if((x*y)>max){
			max = (x*y);
		}
	}
	printf("가장 큰 운동장의 넓이는 %d입니다.",max);
}
