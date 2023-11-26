#include <stdio.h>

int main(){
	int a,b,i;
	printf("***두 수구간의 숫자 출력하기***\n");
	printf("두수를 입력하세요 : ");
	scanf("%d %d",&a,&b);
	if(a>b){
		for(i=b;i<=a;i++){
			printf("%d ",i);
		}
	}else{
		for(i=a;i<=b;i++){
			printf("%d ",i);
		}
	}
}
