#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	a = 90-a;
	if(a==0){
		printf("%d",b);
	}else{
		b = b+1;
		if(a>=5){
			b += (a-1)/5;
		}
	}
	printf("%d",b);
	
	return 0;
}
