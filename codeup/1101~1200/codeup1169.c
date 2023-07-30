#include <stdio.h>

int main(){
	int old,y;
	scanf("%d",&old);
	
	if(2012-old+1 < 2000){
		y = 2012-old+1-1900;
		printf("%d %d",y,1);
	}else{
		y = 2012-old+1-2000;
		printf("%d %d",y,3);
	}
}
