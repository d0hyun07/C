#include <stdio.h>

int main(){
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	int d = a+b+c;
	
	if((d/100)%2==0){
		printf("대박");
	}
	else{
		printf("그럭저럭");
	}
}

