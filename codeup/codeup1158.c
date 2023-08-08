#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	/*if(a>=30 && a<=40){
		printf("win");
	}else if(a>=60 && a<=70){
		printf("win");
	}else{
		printf("lose");
	}*/
	printf("%s",a >=30 && a<=40 ? "win" : a>=60 && a<=70 ? "win" : "lose");
	
	return 0;	
}
