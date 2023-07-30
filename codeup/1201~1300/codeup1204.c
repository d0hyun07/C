#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	if(n==1){
		printf("1st");
	}else if(n==2){
		printf("2nd");
	}else if(n==3){
		printf("3rd");
	}else if(n>3 && n<20){
		printf("%dth",n);
	}else if(n%10==1){
		printf("%dst",n);
	}else if(n%10==2){
		printf("%dnd",n);
	}else if(n%10==3){
		printf("%drd",n);
	}else{
		printf("%dth",n);
	}
}
