#include <stdio.h>

int main(){
	int a,b,c,d;
	
	scanf("%02d%d %01d",&a,&d,&b);
	if(b==1 || b==2){
		a = a + 1900;
		c = 2012 - a;
	}else if(b==3 || b==4){
		a = a + 2000;
		c = 2012 - a;
	}
	
	printf("%d",c+1);
}
