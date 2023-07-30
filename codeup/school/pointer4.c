#include <stdio.h>

int main(){
	int n,sum=0,result;
	printf("용의자의 DNA정보룰 입력하세요 : ");
	scanf("%d",&n);
	
	int i;
	/*for(i=0;i<10;i++){
		sum = sum+(n%10);
		n = n/10;
	}*/
	
	while(n>0){
		sum = sum+(n%10);
		n = n/10;
	}
	
	if(sum%7==4)
		printf("범인");
	else
		printf("일반인"); 
}
