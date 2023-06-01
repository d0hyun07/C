#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	if(n>10000){
		printf("%d",1475+(n-10000)*2/100);
	}else if(n>4500){
		printf("%d",1200+(n-4500)*5/100);
	}else if(n>1500){
		printf("%d",750+(n-1500)*15/100);
	}else if(n>500){
		printf("%d",350+(n-500)*40/100);
	}else{
		printf("%d",n * 70/100);
	}
}
