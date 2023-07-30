#include <stdio.h>

int main(){
	int a,b,c;
	
	scanf("%4d%2d%2d",&a,&b,&c);
	
	if((a-b+c)%10==0){
		printf("대박");
	}else{
		printf("그럭저럭");
	}
}

