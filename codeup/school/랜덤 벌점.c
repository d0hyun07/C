#include <stdio.h>
#include <stdlib.h>

int main(){
	int start, last, num;
	printf("*** 벌점 뽑기 프로그램 ***\n");
	printf("번호의 범위를 입력하세요(시작번호,마지막번호) : ");
	scanf("%d %d",&start, &last);
	num = rand()%(last - start+1)+start;
	printf("추하합니다. 벌점 번호는 %d입니다.",num);
}
